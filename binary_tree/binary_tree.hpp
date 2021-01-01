#ifndef _BINARY_TREE_HPP_
#define _BINARY_TREE_HPP_

#include <ostream>

using namespace std;

class Leaf {
    public:
        Leaf* left;
        Leaf* right;
        int data;
};

class BinaryTree {
    public:
        Leaf root;
};

ostream& operator<<(ostream& os, BinaryTree& tree);

#endif