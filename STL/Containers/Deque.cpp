/*
A deque (short for “double-ended queue”) is a dynamic container that allows insertion 
and deletion of elements from both ends. It is defined in the <deque> header file.
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {

    // Initialization of deque
    deque<int> dq;             // Empty deque
    deque<int> dq1 = {2, 5, 6, 7}; // Initializing deque with values

    // Adding elements to the back
    dq.push_back(2);       // Adds 2 to the end of the deque
    dq.emplace_back(4);    // Adds 4 to the end, constructed in place (faster than push_back)

    // Adding elements to the front (unique to deque, not available in vector)
    dq.push_front(1);      // Adds 1 to the front
    dq.emplace_front(3);   // Adds 3 to the front, constructed in place

    // Display the deque after additions
    cout << "Deque after additions: ";
    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    // **Functions similar to vector**
    // dq.begin();                          // Iterator to the first element
    // dq.end();                            // Iterator to one past the last element
    // dq.size();                           // Returns the number of elements in the deque
    // dq.clear();                          // Removes all elements
    // dq.empty();                          // Checks if the deque is empty

    // **Unique deque functions (not in vector)**
    dq.pop_front();         // Removes the front element
    dq.pop_back();          // Removes the last element

    // Accessing elements directly
    cout << "Front element: " << dq.front() << endl; // Accesses the first element
    cout << "Back element: " << dq.back() << endl;   // Accesses the last element

    // Display deque after unique deque-specific operations
    cout << "Deque after additional deque-specific operations: ";
    for (auto i : dq) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}