#ifndef _HASH_SET_CPP_
#define _HASH_SET_CPP_

#include "hash_set.hpp"

HashSet::HashSet() {
    table.append(LinkedList<int>());
}

int HashSet::get_hash(int element) {
    return 0;
}

int HashSet::get_index_using_hash(int hash) {
    return hash % table.size();
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
    }
}

void HashSet::remove(int element) {
    int hash_value = get_hash(element);
    int index = get_index_using_hash(hash_value);

    int element_index = table[index].index_of(element);
    table[index].remove(element_index);
    length--;
}

#endif