#ifndef _BINARY_TREE_CPP_
#define _BINARY_TREE_CPP_

#include <iostream>
#include <cmath>

#include "binary_tree.hpp"
#include "../list/list.hpp"

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

bool BinaryTree::breadth_first_search(int data) {
    List<Leaf> queue;
    List<Leaf> visited_leaves;
    queue.append(root);
    visited_leaves.append(root);

    while (queue.size() != 0) {
        Leaf current_leaf = queue[0];
        queue.remove(0);

        if (current_leaf.data == data) {
            return true;
        }

        if (current_leaf.left != NULL && !visited_leaves.contains(*current_leaf.left)) {
            visited_leaves.append(*current_leaf.left);
            queue.append(*current_leaf.left);
        }

        if (current_leaf.right != NULL && !visited_leaves.contains(*current_leaf.right)) {
            visited_leaves.append(*current_leaf.right);
            queue.append(*current_leaf.right);
        }
    }

    return false;
}

#endif