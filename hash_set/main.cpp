#include <iostream>
#include <vector>

#include "hash_set.hpp"

using namespace std;

int main() {
    HashSet set;

    set.add(1);
    set.add(2);
    set.add(3);
    set.add(2);
    set.add(1);

    cout << "--------------------------------------------------" << endl;

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

    cout << "I will clear the set" << endl;

    set.clear();

    cout << set << endl;
}