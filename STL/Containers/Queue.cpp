/* 
Queue is a container adapter that operates on a First In, First Out (FIFO) principle.
Elements are added to the back of the queue and removed from the front, making it 
ideal for scenarios where data needs to be processed in the order it was added.
*/

#include <iostream>
#include <queue> // Include the queue header for queue functionality
using namespace std;

int main() {
    // Initialization of a queue of integers
    queue<int> q;

    // Adding elements to the queue
    q.push(10); // Add 10 to the back of the queue
    q.push(20); // Add 20 to the back of the queue
    q.emplace(30); // Add 30 to the back of the queue(faster)

    // Display the front element of the queue
    cout << "Front element: " << q.front() << endl; // Output: 10

    // Removing the front element from the queue
    q.pop(); // Remove the front element (10)

    cout << "Front element after pop: " << q.front() << endl; // Output: 20

    // Display the current size of the queue
    cout << "Current size of the queue: " << q.size() << endl; // Output: 2

    // Check if the queue is empty
    if (q.empty()) {
        cout << "The queue is empty." << endl;
    } else {
        cout << "The queue is not empty." << endl; // Output: The queue is not empty.
    }

    // Adding more elements to the queue
    q.push(40);
    q.push(50);

    // Display all elements in the queue
    cout << "Elements in the queue: ";
    queue<int> temp = q; // Use a temporary queue to display elements
    while (!temp.empty()) {
        cout << temp.front() << " "; // Display front element
        temp.pop(); // Remove front element
    }
    cout << endl;

    // Clear the queue
    while (!q.empty()) {
        q.pop(); // Pop all elements from the queue
    }

    cout << "Queue cleared. Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Output: Yes

    //All the operations mentioned above (push, pop, front, back, size, empty) happen in O(1) time complexity, 
    //making queues efficient for various applications like scheduling, buffering, and more.

    return 0;
}