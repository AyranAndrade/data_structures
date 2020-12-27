#include <iostream>

#include "list_set.hpp"

using namespace std;

template <class  T>
void print_all(ListSet<T> set) {
    cout << "Size: " << set.size() << endl;

    List<T> elements = set.get_all();

    for (int i = 0; i < elements.size(); i++) {
        cout << elements.get(i) << endl;
    }
}

int main() {
    ListSet<int> set;

    set.add(1);
    set.add(2);
    set.add(3);
    set.add(2);
    set.add(1);

    print_all(set);

    cout << "Contains 4: " << set.contains(4) << endl;

    cout << "Contains 2: " << set.contains(2) << endl;

    cout << "Contains 1: " << set.contains(1) << endl;

    set.remove(2);

    print_all(set);

    cout << "2 was removed." << endl;

    try {
        set.remove(5);
    } catch(invalid_argument& error) {
        cout << "I tried to remove 5 from set: " << error.what() << endl;
    }
}