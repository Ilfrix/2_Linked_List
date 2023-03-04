#include <limits>
#include <iostream>
#include <algorithm>
struct Node{
    int data;
    Node* next;

    Node(){
        this->data = std::numeric_limits<int>::min();
        this->next = nullptr;
    }

    Node (int data){
        this->data = data;
        this->next = nullptr;
    }
    ~Node(){
        delete this;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList(){
        this->head = nullptr;
    }
    ~LinkedList(){
        while(head != nullptr)  pop_front();
    }
    void push_front(int data){
        Node *new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }
    void remove_max(){
        int cur_max = std::numeric_limits<int>::min();
        Node *ptr = new Node();
        Node *max_ptr = new Node();
        for (Node* node = head; node->next != nullptr; node=node->next){
            if (node -> data > cur_max){
                cur_max = node -> data;
                max_ptr = ptr;
            }
            ptr = node;
        }
        max_ptr->next = max_ptr->next->next;
    }

    void pop_front(){
        //delete head;
        head = head->next;
    }
    void clear(){
        while (head != nullptr) pop_front();
    }

    void insert_num_before_even(int data){
        int cur_index = 0;
        for (Node* node = head; node != nullptr; node=node->next, ++cur_index){
            if (cur_index % 2 == 0){
                Node* insert_data = new Node(data);
                insert_data->next = node->next;
                node->next = insert_data;
                std::swap(insert_data->data, node->data);
                node = node->next;
            }
        }
    }
    bool check_equal(){
        Node *first_ptr = head;
        while (first_ptr != nullptr){
            Node *second_ptr = first_ptr->next;
            while (second_ptr != nullptr){
                if (first_ptr->data == second_ptr-> data)
                    return true;
                second_ptr = second_ptr->next;
            }
            first_ptr = first_ptr->next;
            delete second_ptr;
        }
        return false;
    }
    void show_list(){
        for (Node* node = head; node != nullptr; node=node->next)
            std::cout << node->data << ' ';
    }
};
