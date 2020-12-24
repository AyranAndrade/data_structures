#include <cstddef>

class Node {
    public:
        int value;
        Node* next = NULL;
};

class LinkedList {
    public:
        void append(int element);
        int get(int index);
        int size();
        void clear();
        bool contains(int element);
        int index_of(int element);
        int last_index_of(int element);
        void remove(int index);
        void insert(int element, int index);
        LinkedList sub_list(int from, int to);
    private:
        Node head;
        int length = 0;
};
