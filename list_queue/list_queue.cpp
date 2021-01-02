#ifndef _LIST_QUEUE_CPP_
#define _LIST_QUEUE_CPP_

#include <sstream>

#include "list_queue.hpp"

template <class T>
bool ListQueue<T>::is_empty() {
    return array.size() == 0;
}

template <class T>
int ListQueue<T>::size() {
    return array.size();
}

template <class T>
void ListQueue<T>::enqueue(T element) {
    array.append(element);
}

template <class T>
T ListQueue<T>::dequeue() {
    if (!is_empty()) {
        auto element = array[0];
        array.remove(0);
        return element;
    }

    return (T)NULL;
}

template <class T>
List<T> ListQueue<T>::get_as_list() {
    return array;
}

template <class T>
ostream& operator<<(ostream& os, ListQueue<T>& queue) {
    List<T> array = queue.get_as_list();
    os << array;
    return os;
}

#endif