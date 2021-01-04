#include "binary_search_tree.hpp"

int main() {
    BinarySearchTree tree;

    tree.add(5);
    tree.add(1);
    tree.add(6);
    tree.add(3);
    tree.add(2);
    tree.add(7);
    tree.add(5);
    tree.add(54);
    tree.add(2);
    tree.add(9);
    tree.add(23);

    cout << tree << endl;
}