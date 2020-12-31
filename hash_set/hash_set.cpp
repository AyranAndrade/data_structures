#ifndef _HASH_SET_CPP_
#define _HASH_SET_CPP_

#include <cmath>

#include "hash_set.hpp"

using namespace std;

HashSet::HashSet() {
    init_table();
}

void HashSet::init_table() {
    for (int i = 0; i < INITIAL_CAPACITY; i++) {
        table.append(LinkedList<int>());
    }
}

int HashSet::get_hash(int element) {
    return element;
}

int HashSet::get_index_using_hash(int hash) {
    int abs_hash = hash;

    if (abs_hash < 0) {
        abs_hash = abs(abs_hash);
    }

    return abs_hash % table.size();
}

int HashSet::size() {
    return length;
}

LinkedList<int> HashSet::get_all() {
    LinkedList<int> all_elements;

    for (int i = 0; i < table.size(); i++) {
        for (int j = 0; j < table[i].size(); j++) {
            all_elements.insert(table[i][j], 0);
        }
    }

    return all_elements;
}

bool HashSet::contains(int element) {
    int index = get_index_using_hash(get_hash(element));

    LinkedList<int> list = table[index];

    return list.contains(element);
}

void HashSet::add(int element) {
    int hash_value = get_hash(element);
    int index = get_index_using_hash(hash_value);

    if (!table[index].contains(element)) {
        table[index].insert(element, 0);
        length++;
        resize_if_necessary();
    }
}

void HashSet::remove(int element) {
    int hash_value = get_hash(element);
    int index = get_index_using_hash(hash_value);

    int element_index = table[index].index_of(element);
    table[index].remove(element_index);
    length--;

    resize_if_necessary();
}

ostream& operator<<(ostream& os, HashSet& m) {
    os << "(";

    LinkedList<int> elements = m.get_all();

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

void HashSet::clear() {
    for (int i = 0; i < table.size(); i++) {
        table[i].clear();
    }

    length = 0;

    table.clear();

    init_table();
}

void HashSet::resize_if_necessary() {
    float float_length = (float) length;
    float float_table_size = (float) table.size();
    float load = float_length/float_table_size;

    if (load > 0.75) {
        int new_capacity = capacity() + 10;

        resize(new_capacity);
    }
}

void HashSet::resize(int new_capacity) {
    LinkedList<int> elements = get_all();
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

int HashSet::capacity() {
    return table.size();
}

#endif