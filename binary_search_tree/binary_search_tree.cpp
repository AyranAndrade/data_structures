#include "binary_search_tree.hpp"

void BinarySearchTree::add(int element) {
    if (!contains(element)) {
        if (quantity_of_elements == 0) {
            root.data = element;
        } else {
            add(&root, &root, element);
        }

        quantity_of_elements++;
    }
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

int BinarySearchTree::count_elements() {
    return quantity_of_elements;
}

int BinarySearchTree::height() {
    return height(&root);
}

int BinarySearchTree::height(Leaf* leaf) {
    if (leaf == NULL) {
        return 0;
    } else {
        int right_leaf_height = height(leaf->right);
        int left_leaf_height = height(leaf->left);

        if (right_leaf_height > left_leaf_height) {
            return right_leaf_height + 1;
        } else {
            return left_leaf_height + 1;
        }
    }
}

bool BinarySearchTree::contains(int element) {
    return binary_search(&root, element);
}

bool BinarySearchTree::binary_search(Leaf* leaf, int element) {
    if (leaf == NULL) {
        return false;
    } else {
        if (leaf->data > element) {
            return binary_search(leaf->left, element);
        } else if (leaf->data < element) {
            return binary_search(leaf->right, element);
        }
    }

    return true;
}

void BinarySearchTree::remove(int element) {
    Leaf* parent = find_parent(&root, &root, element);

    if (parent != NULL) {
        List<Leaf> left_children;

        List<Leaf> right_children;

        if (parent->left != NULL && parent->left->data == element) {
            left_children = as_list(left_children, parent->left->left);

            right_children = as_list(right_children, parent->left->right);

            delete parent->left;
        } else if (parent->right != NULL && parent->right->data == element) {
            left_children = as_list(left_children, parent->right->left);

            right_children = as_list(right_children, parent->right->right);

            delete parent->right;
        }

        quantity_of_elements--;

        for (int i = 0; i < left_children.size(); i++) {
            add(parent, parent, left_children[i].data);
        }

        for (int i = 0; i < right_children.size(); i++) {
            add(parent, parent, right_children[i].data);
        }
    }
}

Leaf* BinarySearchTree::find_parent(Leaf* leaf, Leaf* parent, int element) {
    if (leaf == NULL) {
        return NULL;
    } else {
        if (leaf->data > element) {
            return find_parent(leaf->left, leaf, element);
        } else if (leaf->data < element) {
            return find_parent(leaf->right, leaf, element);
        }
    }

    return parent;
}

List<Leaf> BinarySearchTree::as_list(List<Leaf>& list, Leaf* leaf) {
    if (leaf != NULL) {
        list.append(*leaf);
        as_list(list, leaf->left);
        as_list(list, leaf->right);
    }

    return list;
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