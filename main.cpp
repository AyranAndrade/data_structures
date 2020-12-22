#include <iostream>

#include "list.hpp"

using namespace std;

void print_all(List list) {
    cout << "Size: " << list.size() << endl;

    for (int i = 0; i < list.size(); i++) {
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

    cout << "Length: " << l.size() << '\n';

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

    cout << "Size before remove: " << l.size() << endl;

    cout << "Remove index of number 7." << endl;

    l.remove(7);

    print_all(l);

    cout << "Size after remove: " << l.size() << endl;

    try {
        l.remove(7000);
    } catch (out_of_range& error) {
        cout << "Remove index 7000: " << error.what() << endl;
    }

    cout << "Remove last element" << endl;

    l.remove(l.size() - 1);

    print_all(l);

    cout << "Clear all.\n";

    l.clear();

    print_all(l);

    cout << "New length: " << l.size() << '\n';

    try {
        cout << "New get: " << l.get(256) << '\n';
    } catch (out_of_range& error) {
        cout << "Error: " << error.what() << endl;
    }
}