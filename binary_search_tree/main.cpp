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

    cout << "Quantity of elements: " << tree.count_elements() << endl;
    cout << "Height: " << tree.height() << endl;
    cout << tree << endl;

    cout << "Min value: " << tree.find_min_value() << endl;

    cout << "I will remove everything" << endl << endl;

    tree.remove(7);

    cout << "Quantity of elements: " << tree.count_elements() << endl;
    cout << "Height: " << tree.height() << endl;
    cout << tree << endl;
}