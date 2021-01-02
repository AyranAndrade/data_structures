#ifndef _LIST_QUEUE_HPP_
#define _LIST_QUEUE_HPP_

#include "../list/list.hpp"

template <class T>
class ListQueue {
    public:
        bool is_empty();
        void enqueue(T element);
        T dequeue();
        int size();
        List<T> get_as_list();
    private:
        List<T> array;
};

template <class T>
ostream& operator<<(ostream& os, ListQueue<T>& queue);

#include "list_queue.cpp"

#endif