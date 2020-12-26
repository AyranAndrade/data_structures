#include <iostream>
#include <cstddef>

#include "linked_list.hpp"

using namespace std;

void LinkedList::append(int element) {
    if (length == 0) {
        head.value = element;
    } else {
        Node* pointer = &head;

        while (pointer->next != NULL) {
            pointer = pointer->next;
        }

        Node* new_node = new Node();
        new_node->value = element;
        new_node->next = NULL;

        pointer->next = new_node;
    }

    length++;
}

int LinkedList::size() {
    return length;
}

int LinkedList::get(int index) {
    if (index >= 0 && index < length) {
        Node* pointer = &head;
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

void LinkedList::clear() {
    Node* pointer = head.next;
    Node* next;

    while (pointer != NULL) {
        next = pointer->next;
        delete pointer;
        pointer = next;
    }

    head.value = (int)NULL;
    head.next = NULL;
    length = 0;
}

bool LinkedList::contains(int element) {
    Node* pointer = &head;

    while (pointer != NULL) {
        if (pointer->value == element) {
            return true;
        }

        pointer = pointer->next;
    }

    return false;
}

int LinkedList::index_of(int element) {
    Node* pointer = &head;
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

int LinkedList::last_index_of(int element) {
    Node* pointer = &head;
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

void LinkedList::remove(int index) {
    if (index >= 0 && index < length) {
        Node* previous_pointer = &head;
        Node* pointer = head.next;
        int counter = 1;

        if (length == 1) {
            head.value = (int)NULL;
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
