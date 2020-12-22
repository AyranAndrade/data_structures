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

int List::get(int index) {
    if (index > 0 && index < length) {
        return array[index];
    }

    string message = "Index: " + to_string(index) + " ";

    if (length > 0) {
        message.append("First index possible: 0 Last index possible: " + to_string(length - 1));
    } else {
        message.append("List is empty.");
    }

    throw out_of_range(message);
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

    throw invalid_argument(to_string(element) + " not exists in list.");
}

int List::last_index_of(int element) {
    for (int i = length - 1; i >= 0; i--) {
        if (element == array[i]) {
            return i;
        }
    }

    throw invalid_argument(to_string(element) + " not exists in list.");
}