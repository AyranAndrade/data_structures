#include <iostream>

#include "binary_tree.hpp"

using namespace std;

int main() {
    BinaryTree tree;

    tree.root = Leaf();
    tree.root.right = new Leaf();
    tree.root.left = new Leaf();
    tree.root.data = 1;
    tree.root.left->data = 0;
    tree.root.right->data = 2;
    tree.root.left->left = new Leaf();
    tree.root.left->left->data = 4;

    cout << tree << endl;

    cout << "Height: " << tree.get_height() << endl;
}