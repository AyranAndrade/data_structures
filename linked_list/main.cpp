#include <iostream>

#include "linked_list.hpp"

using namespace std;

int main() {
    LinkedList<int> l;

    l.append(1);
    l.append(2);
    l.append(3);
    l.append(4);
    l.append(5);
    l.append(6);
    l.append(7);
    l.append(8);
    l.append(9);
    l.append(10);

    cout << l << endl;

    l.append(11);
    l.append(12);
    l.append(13);
    l.append(14);
    l.append(15);
    l.append(16);
    l.append(17);
    l.append(18);
    l.append(19);
    l.append(20);

    cout << l << endl;

    l.append(21);
    l.append(22);

    cout << l << endl;

    try {
        l.get(7000);
    } catch (out_of_range& error) {
        cout << "Get index 7000: " << error.what() << endl;
    }

    cout << "1. Contains: " << l.contains(5) << '\n';

    cout << "2. Contains: " << l.contains(500) << '\n';

    cout << "3. Contains: " << l.contains(22) << '\n';

    try {
        cout << "Index of 3 is : " << l.index_of(3) << '\n';
        cout << "Index of 22 is : " << l.index_of(22) << '\n';
        cout << "Index of 300 is: " << l.index_of(300) << '\n';
    } catch (invalid_argument& error) {
        cout << "Error: " << error.what() << endl;
    }    

    try {
        cout << "Last index of 22 is : " << l.last_index_of(22) << '\n';
        l.append(3);
        cout << "Last index of 3 is : " << l.last_index_of(3) << '\n';
        cout << "Last index of 7 is : " << l.last_index_of(7) << '\n';
        cout << "Last index of 300 is : " << l.last_index_of(300) << '\n';
    } catch (invalid_argument& error) {
        cout << "Error: " << error.what() << endl;
    }

    cout << "I will remove some items." << endl;

    LinkedList<int> l1;
    l1.append(10);
    cout << l1 << endl;
    l1.remove(0);
    cout << l1 << endl;

    cout << "I removed items from other list." << endl;

    l.remove(0);

    l.remove(4);

    cout << l << endl;

    cout << "I tried to remove some items from original list." << endl;

    try {
        l.remove(7000);
    } catch (out_of_range& error) {
        cout << "Remove index 7000: " << error.what() << endl;
    }

    cout << "Sublist." << endl;

    LinkedList<int> sub_list = l.sub_list(3, 6);

    cout << sub_list << endl;  // 5, 7, 8, 9

    cout << "Insert mode" << endl;

    l.insert(455, 0);

    l.insert(55, 10);

    l.insert(666, l.size() -1);

    l.insert(667, l.size() -1);

    cout << l << endl;

    try {
        l.insert(1, 345);
    } catch (out_of_range& error) {
        cout << "Insert index 345: " << error.what() << endl;
    }

    cout << "I will clean the list." << endl;

    l.clear();

    cout << l << endl;

    LinkedList<string> l2;
    l2.append("abc");
    l2.append("efg");

    cout << l2 << endl;

    cout << l2[1] << endl;
    cout << l2[0] << endl;

    LinkedList<int> l3;
    l3.insert(10, 0);
    l3.insert(11, 0);
    l3.insert(12, 0);

    cout << l3 << endl;
}