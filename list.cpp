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
    if (index > 0 && index < length) {
        return array[index];
    }

    throw out_of_range(to_string(index));
}

int List::get_size() {
    return length;
}

void List::clear() {
    max_length = INITIAL_MAX_LENGTH;
    length = 0;
        
    delete array;
    array = new int[max_length];
}

bool List::contains(int element) {
    for (int i = 0; i < length; i++) {
        if (element == array[i]) {
            return true;
        }
    }

    return false;
}

int List::index_of(int element) {
    for (int i = 0; i < length; i++) {
        if (element == array[i]) {
            return i;
        }
    }

    throw invalid_argument(to_string(element));
}