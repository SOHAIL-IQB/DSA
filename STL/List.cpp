/*
A list in C++ is a sequence container that allows non-contiguous memory allocation.
It is implemented as a doubly-linked list, meaning each node contains pointers to 
both its previous and next nodes. It is defined in the <list> header file.

*/

#include <iostream>
#include <list>

using namespace std;

int main() {

    // Initialization of list
    list<int> ls;           // Empty list
    list<int> ls1 = {2, 5, 6, 6, 7}; // Initializing list with values

    // Adding elements to the back of the list
    ls.push_back(2);      // Adds 2 to the end of the list
    ls.emplace_back(4);   // Adds 4 to the end, constructed in place (faster than push_back)

    // Display the list after additions
    cout << "List after additions: ";
    for (auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    // **Functions similar to vector**
    // list<int>::iterator it = ls.begin(); // Provides iterator to the first element
    // ls.size();                           // Returns the number of elements in the list
    // ls.clear();                          // Removes all elements
    // ls.empty();                          // Checks if the list is empty

    // **Unique list functions (not in vector)**
    ls.push_front(1);       // Adds 1 to the front of the list
    ls.emplace_front(3);    // Adds 3 to the front, constructed in place

    // Splice: Transfers elements from one list to another
    list<int> ls2 = {10, 20, 30};
    ls.splice(ls.end(), ls2); // Moves all elements from ls2 to the end of ls

    // Remove elements by value
    ls.remove(3); // Removes all elements with value 3

    // Reverse the list
    ls.reverse(); // Reverses the order of elements in the list

    // Display list after list-specific operations
    cout << "List after additional list-specific operations: ";
    for (auto i : ls) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}