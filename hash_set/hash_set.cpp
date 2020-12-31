#ifndef _HASH_SET_CPP_
#define _HASH_SET_CPP_

#include <cmath>

#include "hash_set.hpp"

using namespace std;

template<class T>
HashSet<T>::HashSet() {
    init_table();
}

template<class T>
void HashSet<T>::init_table() {
    for (int i = 0; i < INITIAL_CAPACITY; i++) {
        table.append(LinkedList<T>());
    }
}

template<class T>
int HashSet<T>::get_hash(T element) {
    return element;
}

template<class T>
int HashSet<T>::get_index_using_hash(int hash) {
    int abs_hash = hash;

    if (abs_hash < 0) {
        abs_hash = abs(abs_hash);
    }

    return abs_hash % table.size();
}

template<class T>
int HashSet<T>::size() {
    return length;
}

template<class T>
LinkedList<T> HashSet<T>::get_all() {
    LinkedList<T> all_elements;

    for (int i = 0; i < table.size(); i++) {
        for (int j = 0; j < table[i].size(); j++) {
            all_elements.insert(table[i][j], 0);
        }
    }

    return all_elements;
}

template<class T>
bool HashSet<T>::contains(T element) {
    int index = get_index_using_hash(get_hash(element));

    LinkedList<T> list = table[index];

    return list.contains(element);
}

template<class T>
void HashSet<T>::add(T element) {
    int hash_value = get_hash(element);
    int index = get_index_using_hash(hash_value);

    if (!table[index].contains(element)) {
        table[index].insert(element, 0);
        length++;
        resize_if_necessary();
    }
}

template<class T>
void HashSet<T>::remove(T element) {
    int hash_value = get_hash(element);
    int index = get_index_using_hash(hash_value);

    int element_index = table[index].index_of(element);
    table[index].remove(element_index);
    length--;

    resize_if_necessary();
}

template<class T>
ostream& operator<<(ostream& os, HashSet<T>& m) {
    os << "(";

    LinkedList<T> elements = m.get_all();

    for (int i = 0; i < elements.size(); i++) {
        if (i == elements.size() - 1) {
            os << elements[i];
        } else {
            os << elements[i] << ", ";
        }
    }

    os <<  ")";

    return os;
}

template<class T>
void HashSet<T>::clear() {
    for (int i = 0; i < table.size(); i++) {
        table[i].clear();
    }

    length = 0;

    table.clear();

    init_table();
}

template<class T>
void HashSet<T>::resize_if_necessary() {
    float float_length = (float) length;
    float float_table_size = (float) table.size();
    float load = float_length/float_table_size;

    if (load > 0.75) {
        int new_capacity = capacity() + 10;

        resize(new_capacity);
    }
}

template<class T>
void HashSet<T>::resize(int new_capacity) {
    LinkedList<T> elements = get_all();
    clear();

    for (int i = 0; i < new_capacity - INITIAL_CAPACITY; i++) {
        table.append(LinkedList<int>());
    }

    for (int i = 0; i < elements.size(); i++) {
        int hash_value = get_hash(elements[i]);

        int index = get_index_using_hash(hash_value);

        table[index].insert(elements[i], 0);

        length++;
    }
}

template<class T>
int HashSet<T>::capacity() {
    return table.size();
}

#endif