#include <iostream>

#include "list.hpp"

using namespace std;

void List::append(int element) {
    if (length >= max_length) {
        max_length += 10;
        
        int *new_array = new int[max_length];

        for (int i = 0; i < length; i++) {
            new_array[i] = array[i];
        }

        delete array;
        array = new_array;
    }

    array[length] = element;
    length++;
}

void List::print_all() {
    cout << "Max length: " << max_length << '\n';
    cout << "Length: " << length << '\n';

    for (int i = 0; i < length; i++) {
        cout << array[i] << "\n";
    }
}

int List::get(int index) {
    return array[index];
}