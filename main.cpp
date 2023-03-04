#include "LinkedList.h"
int main(){
    LinkedList list;
    list.push_front(1);
    list.push_front(5);
    list.push_front(45);
    list.push_front(1);
    //1 45 5 1
    //list.insert_num_before_even(10);
    list.show_list();
    list.remove_max();
    //list.clear();
    std::cout << '\n';
    std::cout << "clear list\n";
    list.show_list();
    //list.show_list();
    //std::cout << '\n' << list.check_equal();
    //для информационных источников
    //http://www.opita.net
    //https://stackoverflow.com
    //https://en.cppreference.com
    return 0;
}