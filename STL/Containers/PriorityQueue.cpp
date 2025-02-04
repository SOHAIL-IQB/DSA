/*A Priority Queue is similar to a standard queue, but with one key difference: 
elements are prioritized based on their value. By default, the largest value is 
placed at the top and dequeued first.
*/

#include <iostream>
#include <queue> // Include the queue header for priority queue functionality
using namespace std;

int main() {
    // Max-priority queue of integers
    priority_queue<int> pq;

    // Adding elements
    pq.push(10); 
    pq.push(20);
    pq.emplace(30); // Faster insertion

    // Display the top element
    cout << "Top element: " << pq.top() << endl; // Output: 30

    // Remove the top element
    pq.pop(); 
    cout << "Top element after pop: " << pq.top() << endl; // Output: 20

    // Check size and empty status
    cout << "Current size: " << pq.size() << endl;
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // Add more elements and display all
    pq.push(40);
    pq.push(50);

    cout << "Elements in priority order: ";
    priority_queue<int> temp = pq; 
    while (!temp.empty()) {
        cout << temp.top() << " "; 
        temp.pop();
    }
    cout << endl;

        // Create a min-priority queue using greater<int>
    priority_queue<int, vector<int>, greater<int>> pq2;//********/

    // Adding elements to the priority queue
    pq2.push(8);  
    pq2.push(3);  
    pq2.push(5);  
    pq2.push(7);  
    pq2.emplace(4);  

    // Output the top element (smallest element) before any operation
    cout << "Top element of the min-priority queue: " << pq2.top() << endl; // Output: 3

    // Displaying and removing elements in ascending order
    cout << "Elements in the min-priority queue (ascending order): ";
    while (!pq2.empty()) {
        cout << pq2.top() << " "; // Print the smallest element
        pq2.pop(); // Remove the smallest element

        //This is also known as min-heap
        //and normal priority queue is known as max-heap.
    }
    cout << endl;
    // Clear the priority queue
    while (!pq.empty()) pq.pop();
    cout << "Is empty after clearing? " << (pq.empty() ? "Yes" : "No") << endl;

    return 0;
}