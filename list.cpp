#include <iostream>
#include <cstring>

#include "list.hpp"

using namespace std;

void List::append(int element) {
    if (length >= max_length) {
        max_length *= 2;
        
        int *new_array = new int[max_length];

        memcpy(new_array, array, max_length * sizeof(int));
    }

    array[length] = element;
    length++;
}

void List::print_all() {
    for (int i = 0; i < length; i++) {
        cout << array[i] << "\n";
    }
}