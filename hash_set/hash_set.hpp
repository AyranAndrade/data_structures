#ifndef _HASH_SET_HPP_
#define _HASH_SET_HPP_

#include "../list/list.hpp"
#include "../linked_list/linked_list.hpp"

template<class T>
class HashSet {
    public:
        void add(T element);

        void remove(T element);

        bool contains(T element);

        int size();

        LinkedList<T> get_all();

        void clear();

        int capacity();

        HashSet();
    private:
        int get_hash(T element);

        int get_index_using_hash(int hash);

        void resize_if_necessary();

        void resize(int new_capacity);

        void init_table();

        List<LinkedList<T>> table;

        int length = 0;

        const int INITIAL_CAPACITY = 10;
};

template<class T>
std::ostream& operator<<(std::ostream& os, HashSet<T>& m);

#include "hash_set.cpp"

#endif