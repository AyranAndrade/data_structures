#include <iostream>
#include <vector>

#include "hash_set.hpp"

using namespace std;

int main() {
    HashSet set;

    cout << "1. capacity: " << set.capacity() << endl;

    cout << "1. size: " << set.size() << endl;

    set.add(1);

    set.add(2);
    set.add(3);
    set.add(2);
    set.add(1);

    cout << "2. capacity: " << set.capacity() << endl;

    cout << "2. size: " << set.size() << endl;

    cout << set << endl;

    cout << "Contains 4: " << set.contains(4) << endl;

    cout << "Contains 2: " << set.contains(2) << endl;

    cout << "Contains 1: " << set.contains(1) << endl;

    set.remove(2);

    cout << set << endl;

    cout << "2 was removed." << endl;

    try {
        set.remove(5);
    } catch(invalid_argument& error) {
        cout << "I tried to remove 5 from set: " << error.what() << endl;
    }

    cout << "3. capacity: " << set.capacity() << endl;

    cout << "3. size: " << set.size() << endl;

    cout << "I will clear the set" << endl;

    set.clear();

    cout << set << endl;

    cout << "4. capacity: " << set.capacity() << endl;

    cout << "4. size: " << set.size() << endl;

    set.add(1);
    set.add(2);
    set.add(3);
    set.add(4);
    set.add(19);
    set.add(5);
    set.add(6);
    set.add(5);
    set.add(7);
    set.add(8);
    set.add(9);
    set.add(10);
    set.add(11);
    set.add(11);
    set.add(12);
    set.add(13);
    set.add(14);
    set.add(15);
    set.add(16);
    set.add(15);
    set.add(17);
    set.add(18);
    set.add(19);
    set.add(20);
    set.add(21);
    set.add(22);
    set.add(22);
    set.add(23);
    set.add(24);
    set.add(25);
    set.add(26);
    set.add(27);
    set.add(28);
    set.add(29);
    set.add(30);
    set.add(31);

    cout << set << endl;

    cout << "5. capacity: " << set.capacity() << endl;

    cout << "5. size: " << set.size() << endl;
}