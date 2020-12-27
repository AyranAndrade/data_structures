#ifndef _LINKED_LIST_HPP_
#define _LINKED_LIST_HPP_

#include <cstddef>

template <class T>
class Node {
    public:
        T value;
        Node<T>* next = NULL;
};

template <class T>
class LinkedList {
    public:
        void append(T element);
        T get(int index);
        int size();
        void clear();
        bool contains(T element);
        int index_of(T element);
        int last_index_of(T element);
        void remove(int index);
        void insert(T element, int index);
        LinkedList sub_list(int from, int to);
        T operator[](int index);
        LinkedList();
    private:
        LinkedList(Node<T> head, int length);
        Node<T> head;
        int length = 0;
};

#include "linked_list.cpp"
#endif