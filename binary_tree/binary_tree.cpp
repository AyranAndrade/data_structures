#ifndef _BINARY_TREE_CPP_
#define _BINARY_TREE_CPP_

#include <iostream>

#include "binary_tree.hpp"

using namespace std;

ostream& operator<<(ostream& os, BinaryTree& tree) {
    tree.post_order(&tree.root);
    return os;
}

void BinaryTree::pre_order(Leaf* leaf) {
    if (leaf != NULL) {
        cout << leaf->data << " ";
        pre_order(leaf->left);
        pre_order(leaf->right);
    }
}

void BinaryTree::in_order(Leaf* leaf) {
    if (leaf != NULL) {
        pre_order(leaf->left);
        cout << leaf->data << " ";
        pre_order(leaf->right);
    }
}

void BinaryTree::post_order(Leaf* leaf) {
    if (leaf != NULL) {
        pre_order(leaf->left);
        pre_order(leaf->right);
        cout << leaf->data << " ";
    }
}

#endif