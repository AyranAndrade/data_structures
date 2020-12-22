#include <iostream>

#include "list.hpp"

using namespace std;

void print_all(List list) {
    cout << "Size: " << list.get_size() << endl;

    for (int i = 0; i < list.get_size(); i++) {
        cout << list.get(i) << endl;
    }
}

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

    print_all(l);

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

    print_all(l);

    l.append(21);
    l.append(22);

    print_all(l);

    cout << "Get: " << l.get(3) << '\n';

    cout << "Length: " << l.get_size() << '\n';

    cout << "1. Contains: " << l.contains(5) << '\n';

    cout << "2. Contains: " << l.contains(500) << '\n';

    try {
        cout << "Index of: " << l.index_of(3) << '\n';
        cout << "Index of: " << l.index_of(300) << '\n';
    } catch (invalid_argument& error) {
        cout << "Error: " << error.what() << endl;
    }    

    try {
        l.append(3);
        cout << "Last index of 3 is : " << l.last_index_of(3) << '\n';
        cout << "Last index of 300 is : " << l.last_index_of(300) << '\n';
    } catch (invalid_argument& error) {
        cout << "Error: " << error.what() << endl;
    }    

    cout << "Clear all.\n";

    l.clear();

    print_all(l);

    cout << "New length: " << l.get_size() << '\n';

    try {
        cout << "New get: " << l.get(256) << '\n';
    } catch (out_of_range& error) {
        cout << "Error: " << error.what() << endl;
    }
}