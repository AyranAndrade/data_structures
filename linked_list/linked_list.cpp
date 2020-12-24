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

        while (pointer->next != NULL) {
            if (counter == index) {
                return pointer->value;
            }

            pointer = pointer->next;
            counter++;
        }

        return pointer->value;
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

    while (pointer != NULL && pointer->next != NULL) {
        next = pointer->next;
        delete pointer;
        pointer = next;
    }

    head.value = (int)NULL;
    head.next = NULL;
    length = 0;
}