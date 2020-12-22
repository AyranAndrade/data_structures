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
    l.append(11);
    l.append(12);

    cout << "Append operation works!\n";

    l.print_all();
}