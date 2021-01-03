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

    cout << "-------------------------------" << endl;

    cout << "1. DFS contains 2: " << tree.depth_first_search(2) << endl;

    cout << "2. DFS contains 4: " << tree.depth_first_search(4) << endl;

    cout << "3. DFS contains 8: " << tree.depth_first_search(8) << endl;

    cout << "Binary search" << endl;

    BinaryTree t1;

    t1.root = Leaf();
    t1.root.data = 5;
    t1.root.right = new Leaf();
    t1.root.right->data = 8;
    t1.root.left = new Leaf();
    t1.root.left->data = 3;
    t1.root.left->left = new Leaf();
    t1.root.left->left->data = 2;
    t1.root.left->right = new Leaf();
    t1.root.left->right->data = 4;
    t1.root.right->left = new Leaf();
    t1.root.right->left->data = 7;
    t1.root.right->right = new Leaf();
    t1.root.right->right->data = 9;

    cout << "Pre order: ";

    t1.pre_order(&t1.root);

    cout << endl;

    cout << "1. Binary search will find 9: " << t1.binary_search(9) << endl;

    cout << "2. Binary search will find 2: " << t1.binary_search(2) << endl;

    cout << "3. Binary search will find 4: " << t1.binary_search(4) << endl;

    cout << "4. Binary search will find 7: " << t1.binary_search(7) << endl;

    cout << "5. Binary search will NOT find 15: " << t1.binary_search(15) << endl;

    cout << "6. Binary search will NOT find 30: " << t1.binary_search(30) << endl;
}