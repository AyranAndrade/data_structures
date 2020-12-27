#ifndef _LIST_SET_HPP_
#define _LIST_SET_HPP_

#include "../list/list.hpp"

template <class T>
class ListSet {
    public:
        void add(T element);
        void remove(T element);
        bool contains(T element);
        int size();
        List<T> get_all();
    private:
        List<T> elements;
};

#include "list_set.cpp"
#endif