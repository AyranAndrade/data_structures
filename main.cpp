#include <iostream>

#include "list.hpp"

using namespace std;

int main() {
    List l;
    
    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.append(6);
    l.append(7);
    l.append(8);
    l.append(9);
    l.append(10);

    l.print_all();

    l.append(11);
    l.append(12);
    l.append(13);
    l.append(14);
    l.append(15);
    l.append(16);
    l.append(17);
    l.append(18);
    l.append(19);
    l.append(20);

    l.print_all();

    l.append(21);
    l.append(22);

    l.print_all();

    cout << "Get: " << l.get(3) << '\n';

    cout << "Length: " << l.get_size() << '\n';
}