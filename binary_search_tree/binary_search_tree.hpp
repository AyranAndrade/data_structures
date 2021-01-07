#include <iostream>

#include "../list/list.hpp"

using namespace std;

class Leaf {
    public:
        int data;
        Leaf* right = NULL;
        Leaf* left = NULL;
};

class BinarySearchTree {
    public:
        void add(int element);
        void remove(int element);
        bool contains(int element);
        int height();
        int count_elements();
        void print();
        int find_min_value();
    private:
        int quantity_of_elements = 0;
        Leaf root;
        Leaf* add(Leaf* leaf, int element);
        Leaf* remove(Leaf* leaf, int element);
        bool binary_search(Leaf* leaf, int element);
        Leaf* find_min_value(Leaf* leaf);
        int height(Leaf* leaf);
        void printBT(const std::string& prefix, Leaf* node, bool isLeft);
};

ostream& operator<<(ostream& os, BinarySearchTree& tree);