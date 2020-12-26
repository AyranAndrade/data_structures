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
    if (index >= 0 && index < length) {
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

int List::size() {
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

void List::remove(int index) {
    if (index >= 0 && index < length) {
        if (index < length - 1) {
            for (int i = index; i < length; i++) {
                array[i] = array[i+1];
            }
        }

        length--;
    } else {
        throw out_of_range(to_string(index) + " not exists in list.");
    }
}

List List::sub_list(int from, int to) {
    if (from > to || from < 0 || to >= length) {
        return List();
    }

    int new_length = to - from + 1;

    int new_max_length = (10 - (new_length % 10)) + new_length;

    int *new_array = new int[new_max_length];

    for (int i = from, j = 0; i <= to; i++, j++) {
        new_array[j] = array[i];
    }

    return List(new_array, new_max_length, new_length);
}

List::List() {}

List::List(int *array, int max_length, int length) {
    this->array = array;
    this->INITIAL_MAX_LENGTH = 10;
    this->length = length;
    this->max_length = max_length;
}