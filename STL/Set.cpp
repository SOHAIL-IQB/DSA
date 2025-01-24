/*
A Set is a container in the Standard Template Library (STL) that stores elements in a **sorted order**.
It ensures that all elements are **unique**, meaning duplicate values cannot be stored.
The underlying implementation is typically a balanced binary search tree.
*/

#include <iostream>
#include <set> // Header file for set

using namespace std;

int main() {

    // **Initialization**
    set<int> st; // Create an empty set

    // **Inserting Elements**
    st.insert(1); // Insert 1 into the set
    st.insert(3); // Insert 3 into the set
    st.insert(2); // Insert 2 into the set
    st.insert(2); // Duplicate value will not be inserted
    st.insert(5); // Insert 5 into the set

    // The set stores elements in ascending order: {1, 2, 3, 5}

    // **Iterators**
    /*
    Iterators allow traversal of the set. 
    They behave similarly to pointers and are used to access elements.
    */
    auto it = st.find(3); // Returns an iterator pointing to the element 3
    if (it != st.end()) {
        cout << "Element found: " << *it << endl;
    }

    it = st.find(6); // Try to find element 6
    if (it == st.end()) {  //If the element is not present then it points right after the end.
        cout << "Element not found in the set." << endl;
    }

    // **Erase Function**
    /*
    `erase(value)` removes the specified value from the set. 
    If the value is not found, it does nothing.
    */
    st.erase(3); // Remove element 3 from the set

    // **Count Function**
    /*
    `count(value)` checks if the specified value exists in the set.
    It returns:
      - `1` if the element is present.
      - `0` if the element is not present.
    */
    int count = st.count(1); // Returns 1 because 1 exists in the set
    cout << "Count of 1: " << count << endl;

    // **Range Erase**
    /*
    Erase a range of elements by passing iterators to the start and end positions.
    */
    st.erase(st.find(1), st.find(5)); // Erase elements in the range [1, 5) (1 and 2 will be removed)

    // **Traversal**
    /*
    Use iterators or range-based for loops to traverse the set.
    */
    cout << "Elements in the set: ";
    for (auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    // **Functions Similar to Vectors**
    /*
    The following functions work similarly to their counterparts in vectors:
      - `begin()`: Returns an iterator to the first element.
      - `end()`: Returns an iterator to one past the last element.
      - `rbegin()`: Returns a reverse iterator to the last element.
      - `rend()`: Returns a reverse iterator to one before the first element.
      - `size()`: Returns the number of elements in the set.
      - `empty()`: Checks if the set is empty.
      - `swap()`: Swaps the contents of two sets.
      - `clear()`: Removes all elements from the set.
    */

    // Example: `begin()` and `end()`
    auto start = st.begin(); // Iterator pointing to the first element
    auto end = st.end();     // Iterator pointing one past the last element
    if (start != end) {
        cout << "First element: " << *start << endl;
    }

    // Example: `size()` and `empty()`
    cout << "Size of the set: " << st.size() << endl; // Prints the size of the set
    cout << "Is the set empty? " << (st.empty() ? "Yes" : "No") << endl;

    // **Swap Function**
    /*
    Swap the contents of two sets in constant time.
    */
    set<int> st2 = {10, 20, 30};
    st.swap(st2); // Swap st and st2

    cout << "Elements in the swapped set (st): ";
    for (auto i : st) {
        cout << i << " ";
    }
    cout << endl;

    // **Clear Function**
    st.clear(); // Remove all elements from the set
    cout << "Is the set empty after clearing? " << (st.empty() ? "Yes" : "No") << endl;


    //Everything happens in the log(n) time..

    return 0;
}