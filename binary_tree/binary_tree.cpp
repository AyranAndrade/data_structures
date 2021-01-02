#ifndef _BINARY_TREE_CPP_
#define _BINARY_TREE_CPP_

#include <iostream>
#include <cmath>

#include "binary_tree.hpp"

using namespace std;

bool Leaf::operator==(Leaf& leaf) {
    return this->data == leaf.data && &this->left == &leaf.left && &this->right == &leaf.right;
}

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

int BinaryTree::get_height() {
    return get_height(&root);
}

int BinaryTree::get_height(Leaf* leaf) {
    if (leaf == NULL) {
        return 0;
    } else {
        return max(get_height(leaf->left), get_height(leaf->right)) + 1;
    }
}

#endif