#ifndef _LINKED_LIST_CPP_
#define _LINKED_LIST_CPP_

#include <iostream>
#include <cstddef>

#include "linked_list.hpp"

using namespace std;

template <class T>
void LinkedList<T>::append(T element) {
    if (length == 0) {
        head.value = element;
    } else {
        Node<T>* pointer = &head;

        while (pointer->next != NULL) {
            pointer = pointer->next;
        }

        Node<T>* new_node = new Node<T>();
        new_node->value = element;
        new_node->next = NULL;

        pointer->next = new_node;
    }

    length++;
}

template <class T>
int LinkedList<T>::size() {
    return length;
}

template <class T>
T LinkedList<T>::get(int index) {
    if (index >= 0 && index < length) {
        Node<T>* pointer = &head;
        int counter = 0;

        while (pointer != NULL) {
            if (counter == index) {
                return pointer->value;
            }

            pointer = pointer->next;
            counter++;
        }
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
void LinkedList<T>::clear() {
    Node<T>* pointer = head.next;
    Node<T>* next;

    while (pointer != NULL) {
        next = pointer->next;
        delete pointer;
        pointer = next;
    }

    head.value = (T)NULL;
    head.next = NULL;
    length = 0;
}

template <class T>
bool LinkedList<T>::contains(T element) {
    Node<T>* pointer = &head;

    while (pointer != NULL) {
        if (pointer->value == element) {
            return true;
        }

        pointer = pointer->next;
    }

    return false;
}

template <class T>
int LinkedList<T>::index_of(T element) {
    Node<T>* pointer = &head;
    int counter = 0;

    while (pointer != NULL) {
        if (pointer->value == element) {
            return counter;
        }

        pointer = pointer->next;
        counter++;
    }

    throw invalid_argument(to_string(element) + " not exists in list.");
}

template <class T>
int LinkedList<T>::last_index_of(T element) {
    Node<T>* pointer = &head;
    int counter = 0;
    int last_index = -1;

    while (pointer != NULL) {
        if (pointer->value == element) {
            last_index = counter;
        }

        pointer = pointer->next;
        counter++;
    }

    if (last_index == -1) {
        throw invalid_argument(to_string(element) + " not exists in list.");
    } else {
        return last_index;
    }
}

template <class T>
void LinkedList<T>::remove(int index) {
    if (index >= 0 && index < length) {
        Node<T>* previous_pointer = &head;
        Node<T>* pointer = head.next;
        int counter = 1;

        if (length == 1) {
            head.value = (T)NULL;
        } else {
            if (index == 0) {
                previous_pointer->value = pointer->value;
                previous_pointer->next = pointer->next;
            } else {
                while (pointer != NULL) {
                    if (counter == index) {
                        previous_pointer->next = pointer->next;
                        delete pointer;
                        break;
                    }

                    previous_pointer = pointer;
                    pointer = pointer->next;
                    counter++;
                }
            }
        }

        length--;
    } else {
        throw out_of_range(to_string(index) + " not exists in list.");
    }
}

template <class T>
LinkedList<T> LinkedList<T>::sub_list(int from, int to) {
    Node<T> new_head;
    int new_length = 0;

    if (from < to && from >= 0 && to < length) {
        Node<T>* pointer = &head;
        Node<T>* new_list_pointer = &new_head;
        int counter = 0;

        while (pointer != NULL) {
            if (counter >= from && counter <= to) {
                if (counter == from) {
                    new_list_pointer->value = pointer->value;
                } else {
                    Node<T>* new_node = new Node<T>();
                    new_node->value = pointer->value;
                    new_node->next = NULL;
                    new_list_pointer->next = new_node;
                    new_list_pointer = new_list_pointer->next;
                }

                new_length++;
            }

            counter++;
            pointer = pointer->next;
        }
    }

    return LinkedList(new_head, new_length);
}

template <class T>
LinkedList<T>::LinkedList() {}

template <class T>
LinkedList<T>::LinkedList(Node<T> head, int length) {
    this->head = head;
    this->length = length;
}

template <class T>
void LinkedList<T>::insert(T element, int index) {
    Node<T>* previous = &head;
    Node<T>* current = head.next;
    int counter = 1;

    if (index == 0)  {
        Node<T>* new_node = new Node<T>();
        new_node->value = head.value;
        new_node->next = head.next;
        head.value = element;
        head.next = new_node;
        length++;
    } else if (index > 0 && index < length) {
        while (current != NULL) {
            if (counter == index) {
                Node<T>* new_node = new Node<T>();
                new_node->value = element;
                new_node->next = current;
                previous->next = new_node;
                break;
            }
            previous = current;
            current = current->next;
            counter++;
        }

        length++;
    } else {
        throw out_of_range(to_string(index) + " not exists in list.");
    }
}

template <class T>
T LinkedList<T>::operator[](int index) {
    return get(index);
}

template <class T>
std::ostream &operator<<(std::ostream &os, LinkedList<T> &m) {
    os << "[";

    for (int i = 0; i < m.size(); i++) {
        if (i == m.size() - 1) {
            os << m[i] << "]";
        } else {
            os << m[i] << ", ";
        }
    }

    return os;
}

#endif
