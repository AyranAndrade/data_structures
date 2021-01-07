#ifndef _LIST_CPP_
#define _LIST_CPP_

#include <iostream>

#include "list.hpp"

using namespace std;

template <class T>
void List<T>::append(T element) {
    resize_if_necessary();

    array[length] = element;
    length++;
}

template <class T>
void List<T>::resize_if_necessary() {
    if (length >= max_length) {
        max_length += 10;

        T *new_array = new T[max_length];

        for (int i = 0; i < length; i++) {
            new_array[i] = array[i];
        }

        delete array;
        array = new_array;
    }
}

template <class T>
T& List<T>::get(int index) {
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

template <class T>
int List<T>::size() {
    return length;
}

template <class T>
void List<T>::clear() {
    max_length = INITIAL_MAX_LENGTH;
    length = 0;

    delete array;
    array = new T[max_length];
}

template <class T>
bool List<T>::contains(T element) {
    for (int i = 0; i < length; i++) {
        if (element == array[i]) {
            return true;
        }
    }

    return false;
}

template <class T>
int List<T>::index_of(T element) {
    for (int i = 0; i < length; i++) {
        if (element == array[i]) {
            return i;
        }
    }

    throw invalid_argument(to_string(element) + " not exists in list.");
}

template <class T>
int List<T>::last_index_of(T element) {
    for (int i = length - 1; i >= 0; i--) {
        if (element == array[i]) {
            return i;
        }
    }

    throw invalid_argument(to_string(element) + " not exists in list.");
}

template <class T>
void List<T>::remove(int index) {
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

template <class T>
List<T> List<T>::sub_list(int from, int to) {
    if (from > to || from < 0 || to >= length) {
        return List();
    }

    int new_length = to - from + 1;

    int new_max_length = 10 - (new_length % 10) + new_length;

    T *new_array = new T[new_max_length];

    for (int i = from, j = 0; i <= to; i++, j++) {
        new_array[j] = array[i];
    }

    return List(new_array, new_max_length, new_length);
}

template <class T>
List<T>::List() {}

template <class T>
List<T>::List(T *array, int max_length, int length) {
    this->array = array;
    this->INITIAL_MAX_LENGTH = 10;
    this->length = length;
    this->max_length = max_length;
}

template <class T>
void List<T>::insert(T element, int index) {
    if (index == 0) {
        append(element);
    } else if (index > 0 && index < length) {
        length++;
        resize_if_necessary();

        for (int i = length - 1; i >= index; i--) {
            array[i] = array[i-1];
        }

        array[index] = element;
    } else {
        throw out_of_range(to_string(index) + " not exists in list.");
    }
}

template <class T>
T& List<T>::operator[](int index) {
    return get(index);
}

template <class T>
std::ostream &operator<<(std::ostream &os, List<T> &m) {
    os << "[";

    for (int i = 0; i < m.size(); i++) {
        if (i == m.size() - 1) {
            os << m[i];
        } else {
            os << m[i] << ", ";
        }
    }

    os << "]";

    return os;
}

template <class T>
void List<T>::bubble_sort() {
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length -1; j++) {
            if (array[j] > array[j+1]) {
                T temporary_element = array[j];
                array[j] = array[j+1];
                array[j+1] = temporary_element;
            }
        }
    }
}

template <class T>
T List<T>::max() {
    if (length >= 2) {
        int mid_value = (length-1)/2;
        return max(0, length-1);
    } else {
        if (length == 0) {
            return (T)NULL;
        } else {
            return array[0];
        }
    }
}

template <class T>
T List<T>::max(int start, int end) {
    if (start == end - 1) {
        if (array[start] > array[end]) {
            return array[start];
        } else {
            return array[end];
        }
    } else {
        int mid_index = (end - start)/2 + start;
        int first_value = max(start, mid_index);
        int second_value = max(mid_index, end);
        if (first_value > second_value) {
            return first_value;
        } else {
            return second_value;
        }
    }
}

#endif