#ifndef _LIST_HPP_
#define _LIST_HPP_

template<class T>
class List {
    public:
        void append(T element);

        T& get(int index);

        int size();

        void clear();

        bool contains(T element);

        int index_of(T element);

        int last_index_of(T element);

        void remove(int index);

        void insert(T element, int index);

        List sub_list(int from, int to);

        void bubble_sort();

        T& operator[](int index);

        List();
    private:
        List(T *array, int max_length, int length);

        void resize_if_necessary();

        T *array = new T[10];

        int INITIAL_MAX_LENGTH = 10;

        int max_length = INITIAL_MAX_LENGTH;

        int length = 0;
};

#include "list.cpp"
#endif