#ifndef _LIST_SET_CPP_
#define _LIST_SET_CPP_

#include "list_set.hpp"

template <class T>
void ListSet<T>::add(T element) {
    if (!contains(element)) {
        elements.append(element);
    }
}

template <class T>
bool ListSet<T>::contains(T element) {
    return elements.contains(element);
}

template <class T>
int ListSet<T>::size() {
    return elements.size();
}

template <class T>
void ListSet<T>::remove(T element) {
    int index = elements.index_of(element);
    elements.remove(index);
}

template <class T>
List<T> ListSet<T>::get_all() {
    return elements;
}
#endif