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
    tree.pre_order();
    return os;
}

void BinarySearchTree::pre_order() {
    printBT("", &root, false);

    cout << endl << endl;

    if (quantity_of_elements != 0) {
        cout << "Quantity of elements: " << quantity_of_elements << endl;
        pre_order(&root);
    }
}

void BinarySearchTree::pre_order(Leaf* leaf) {
    if (leaf != NULL) {
        cout << leaf->data << " ";
        pre_order(leaf->left);
        pre_order(leaf->right);
    }
}

void BinarySearchTree::printBT(const std::string& prefix, Leaf* node, bool isLeft) {
    if( node != nullptr )
    {
        std::cout << prefix;

        std::cout << (isLeft ? "├──" : "└──" );

        // print the value of the node
        std::cout << node->data << std::endl;

        // enter the next tree level - left and right branch
        printBT( prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT( prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}