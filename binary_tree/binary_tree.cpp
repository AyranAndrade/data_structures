#ifndef _BINARY_TREE_CPP_
#define _BINARY_TREE_CPP_

#include <iostream>

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
        int left_height = get_height(leaf->left);
        int right_height = get_height(leaf->right);

        if (left_height > right_height) {
            return left_height + 1;
        } else {
            return right_height + 1;
        }
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

bool BinaryTree::depth_first_search(int data) {
    List<Leaf> stack;
    List<Leaf> visited_leaves;
    stack.append(root);
    visited_leaves.append(root);

    while (stack.size() != 0) {
        int last_index = stack.size() - 1;
        Leaf current_leaf = stack[last_index];
        stack.remove(last_index);

        if (current_leaf.data == data) {
            return true;
        }

        if (!visited_leaves.contains(current_leaf)) {
            visited_leaves.append(current_leaf);

            if (current_leaf.right != NULL) {
                stack.append(*current_leaf.right);
            }

            if (current_leaf.left != NULL) {
                stack.append(*current_leaf.left);
            }
        }
    }

    return false;
}

bool BinaryTree::binary_search(int data) {
    return binary_search(&root, data);
}

bool BinaryTree::binary_search(Leaf* leaf, int data) {
    if (leaf == NULL) {
        return false;
    }

    if (leaf->data < data) {
        return binary_search(leaf->right, data);
    } else if (leaf->data > data) {
        return binary_search(leaf->left, data);
    }

    return true;
}

#endif