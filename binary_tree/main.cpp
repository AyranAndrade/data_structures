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

    cout << "1. BFS contains 2: " << tree.breadth_first_search(2) << endl;

    cout << "2. BFS contains 4: " << tree.breadth_first_search(4) << endl;

    cout << "3. BFS contains 8: " << tree.breadth_first_search(8) << endl;
}