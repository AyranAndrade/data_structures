#include "binary_search_tree.hpp"

void BinarySearchTree::add(int element) {
    if (quantity_of_elements == 0) {
        root.data = element;
    } else {
        add(&root, &root, element);
    }

    quantity_of_elements++;
}

void BinarySearchTree::add(Leaf* leaf, Leaf* previous, int element) {
    if (leaf == NULL) {
        leaf = new Leaf();
        leaf->data = element;

        if (previous->data < element) {
            previous->right = leaf;
        } else if (previous->data > element) {
            previous->left = leaf;
        }
    } else {
        if (leaf->data > element) {
            add(leaf->left, leaf, element);
        } else if (leaf->data < element) {
            add(leaf->right, leaf, element);
        }
    }
}

ostream& operator<<(ostream& os, BinarySearchTree& tree) {
    tree.print();
    return os;
}

void BinarySearchTree::print() {
    printBT("", &root, false);
}

void BinarySearchTree::printBT(const string& prefix, Leaf* node, bool isLeft) {
    if( node != nullptr )
    {
        cout << prefix;

        cout << (isLeft ? "├──" : "└──" );

        cout << node->data << endl;

        printBT( prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT( prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}