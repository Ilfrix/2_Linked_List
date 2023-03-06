#include "LinkedList.h"
int main(){
    LinkedList list;
    list.push_front(1);
    list.push_front(5);
    list.push_front(45);
    list.push_front(9);
    list.show_list();
    std::cout << '\n';
    list.insert_num_before_even(37);
    list.show_list();
    
    return 0;
}