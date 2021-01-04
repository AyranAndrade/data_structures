#include <iostream>

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
    private:
        int quantity_of_elements = 0;
        Leaf root;
        void add(Leaf* leaf, Leaf* previous, int element);
        void printBT(const std::string& prefix, Leaf* node, bool isLeft);
};

ostream& operator<<(ostream& os, BinarySearchTree& tree);