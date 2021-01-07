#include "binary_search_tree.hpp"

void BinarySearchTree::add(int element) {
    if (!contains(element)) {
        if (quantity_of_elements == 0) {
            root.data = element;
        } else {
            add(&root, element);
        }

        quantity_of_elements++;
    }
}

Leaf* BinarySearchTree::add(Leaf* leaf, int element) {
    if (leaf == NULL) {
        leaf = new Leaf();
        leaf->data = element;
    } else {
        if (leaf->data < element) {
            leaf->right = add(leaf->right, element);
        } else {
            leaf->left = add(leaf->left, element);
        }
    }

    return leaf;
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

int BinarySearchTree::find_min_value() {
    return find_min_value(&root)->data;
}

Leaf* BinarySearchTree::find_min_value(Leaf* leaf) {
    if (leaf->left == NULL) {
        return leaf;
    } else {
        return find_min_value(leaf->left);
    }
}

void BinarySearchTree::remove(int element) {
    if (quantity_of_elements > 0) {
        remove(&root, element);
        quantity_of_elements--;
    }
}

Leaf* BinarySearchTree::remove(Leaf* leaf, int element) {
    if (leaf != NULL) {
        if (leaf->data < element) {
            leaf->right = remove(leaf->right, element);
            return leaf;
        } else if (leaf->data > element) {
            leaf->left = remove(leaf->left, element);
            return leaf;
        } else {
            if (leaf->left == NULL && leaf->right != NULL) {
                Leaf* temporary_value = leaf->right;
                delete leaf;
                return temporary_value;
            } else if (leaf->right == NULL && leaf->left != NULL) {
                Leaf* temporary_value = leaf->left;
                delete leaf;
                return temporary_value;
            } else if (leaf->right == NULL && leaf->left == NULL) {
                delete leaf;
                return NULL;
            } else {
                int min_value = find_min_value(leaf->right)->data;
                leaf->data = min_value;
                return remove(leaf->right, min_value);
            }
        }
    }

    return NULL;
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