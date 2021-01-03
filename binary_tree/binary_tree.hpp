#ifndef _BINARY_TREE_HPP_
#define _BINARY_TREE_HPP_

#include <ostream>

using namespace std;

class Leaf {
    public:
        Leaf* left = NULL;
        Leaf* right = NULL;
        int data = (int)NULL;
        bool operator==(Leaf& leaf);
};

class BinaryTree {
    public:
        Leaf root;
        void pre_order(Leaf* leaf);
        void in_order(Leaf* leaf);
        void post_order(Leaf* leaf);
        int get_height();
        bool breadth_first_search(int data);
        bool depth_first_search(int data);
    private:
        int get_height(Leaf* leaf);
};

ostream& operator<<(ostream& os, BinaryTree& tree);

#endif