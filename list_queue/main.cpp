#include "list_queue.hpp"

int main() {
    ListQueue<int> queue;

    cout << "Before add" << endl;
    cout << queue << endl;
    cout << queue.is_empty() << endl;
    cout << queue.dequeue() << endl;

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(2);
    queue.enqueue(4);

    cout << "Size: " << queue.size() << endl;
    cout << queue << endl;
    cout << queue.dequeue() << endl;
    cout << queue << endl;
    cout << queue.dequeue() << endl;
    cout << queue << endl;
    cout << "Finished with numbers." << endl;

    ListQueue<string> q2;

    cout << q2 << endl;

    q2.enqueue("abc");
    q2.enqueue("abcd");
    q2.enqueue("adc");

    cout << q2 << endl;
    cout << q2.dequeue() << endl;
    cout << q2 << endl;
}