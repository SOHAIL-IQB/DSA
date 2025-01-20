/* 
Stack is a container adapter that operates on a Last In, First Out (LIFO) principle.
Elements are added and removed only from the top of the stack, making it ideal for 
scenarios where data needs to be processed in reverse order.
*/

#include <iostream>
#include <stack> // Include the stack header for stack functionality
using namespace std;

int main() {
    // Initialization of a stack of integers
    stack<int> st1; // First stack
    stack<int> st2; // Second stack

    // Pushing elements onto the first stack
    st1.push(10); // Add 10 to the first stack
    st1.push(20); // Add 20 to the first stack
    st1.push(30); // Add 30 to the first stack

    // Pushing elements onto the second stack
    st2.push(40); // Add 40 to the second stack
    st2.push(50); // Add 50 to the second stack

    // Display the top element of the first stack
    cout << "Top element of st1: " << st1.top() << endl; // Output: 30

    // Removing the top element from the first stack
    st1.pop(); // Remove the top element (30)

    cout << "Top element of st1 after pop: " << st1.top() << endl; // Output: 20

    // Display the current size of the first stack
    cout << "Current size of st1: " << st1.size() << endl; // Output: 2

    // Check if the first stack is empty
    if (st1.empty()) {
        cout << "st1 is empty." << endl;
    } else {
        cout << "st1 is not empty." << endl; // Output: st1 is not empty.
    }

    // Swap the contents of st1 and st2
    st1.swap(st2);

    // Display the top elements after the swap
    cout << "Top element of st1 after swap: " << st1.top() << endl; // Output: 50
    cout << "Top element of st2 after swap: " << st2.top() << endl; // Output: 20

    // Clear the stacks
    while (!st1.empty()) {
        st1.pop(); // Pop all elements from the first stack
    }
    
    while (!st2.empty()) {
        st2.pop(); // Pop all elements from the second stack
    }

    cout << "Both stacks cleared. Is st1 empty? " << (st1.empty() ? "Yes" : "No") << endl; // Output: Yes
    cout << "Is st2 empty? " << (st2.empty() ? "Yes" : "No") << endl; // Output: Yes


    //Everthing happens in O(1) time everthing happens in constant time.
    return 0;
}