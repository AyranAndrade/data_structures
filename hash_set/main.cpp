#include <iostream>
#include <vector>

#include "hash_set.hpp"

using namespace std;

int main() {
    // List<LinkedList<int>> test;
    // test.append(LinkedList<int>());
    // test.get(0).insert(3, 0);
    // test.get(0).insert(2, 0);
    // test.get(0).insert(1, 0);

    // cout << "test1: " << test.get(0) << endl;

    // LinkedList<int> test2 = test.get(0);
    // test2.insert(0,0);
    // test.get(0).insert(-1,0);

    // cout << "test2: " << test2 << endl;
    // cout << "test1: " << test.get(0) << endl;
    // cout << "test2: " << &test2 << endl;
    // cout << "test1: " << &test.get(0) << endl;
    // cout << "--------------------------------------------" << endl;

    // vector<vector<int>> g1;
    // g1.push_back(vector<int>());
    // vector<int> g2 = g1[0];
    // g2.push_back(1);
    // g2.push_back(2);
    // g2.push_back(3);

    // cout << g2[0] << endl;
    // cout << g2[1] << endl;
    // cout << g2[2] << endl;
    // cout << g2.size() << endl;

    // vector<int> g3 = g1[0];
    // cout << "here" << endl;
    // cout << g3.size() << endl;
    // cout << g3[1] << endl;
    // cout << g3[2] << endl;

    // cout << "--------------------------------------------" << endl;


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
}