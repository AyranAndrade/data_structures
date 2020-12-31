#ifndef _HASH_SET_HPP_
#define _HASH_SET_HPP_

#include "../list/list.hpp"
#include "../linked_list/linked_list.hpp"

class HashSet {
    public:
        void add(int element);

        void remove(int element);

        bool contains(int element);

        int size();

        LinkedList<int> get_all();

        void clear();

        HashSet();
    private:
        int get_hash(int element);

        int get_index_using_hash(int hash);

        List<LinkedList<int>> table;

        int length = 0;
};

std::ostream& operator<<(std::ostream& os, HashSet& m);

#endif