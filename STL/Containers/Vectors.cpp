/*
A vector is a dynamic array provided by the Standard Template Library (STL). 
It is defined in the <vector> header file and provides functionalities
similar to arrays but with dynamic resizing capabilities.
*/


#include <iostream>
#include <utility>
#include <vector> // Don't forget to include this header for vector
using namespace std;

int main() {
    // Initialization
    vector<int> v;                       // Empty vector
    vector<int> v1 = {1, 4, 7, 3, 6};    // Initialize vector with values

    // Adding Elements
    v1.push_back(1);                     // Add 1 to the end of the vector
    v1.emplace_back(3);                  // Construct and add 3 to the end (faster than push_back)

    // Vector of pairs
    vector<pair<int, int>> v2;           // Create a vector to hold pairs
    v2.push_back({1, 3});                 // Add pair {1, 3} to the vector
    v2.emplace_back(1, 2);                // Add pair (1, 2) without using {}

    // Initialize vectors with specific sizes and values
    vector<int> v3(5, 100);              // 5 elements, each initialized to 100
    vector<int> v4(5);                   // 5 elements, each initialized to 0 (or garbage values)

    // Copy of a vector
    vector<int> v5(v3);                  // Copy contents of v3 to v5
    v5[3] = 7;                           // Change the 4th element to 7
    v5.at(2) = 6;                        // Change the 3rd element to 6 (same as v5[2])

    // Iterators
    /*
    An iterator is like a pointer or a “bookmark” that helps you go through 
    each item in a container (like a vector) one by one. It helps you access, 
    modify, and move between elements of the container.
    */
    
    vector<int>::iterator i = v5.begin(); // Iterator pointing to the first element
    i++;                                   // Move to the second element
    cout << *(i) << " " << endl;           // Print the second element
    i++;                                   // Move to the third element
    cout << *(i) << " " << endl;           // Print the third element

    // End iterator
    vector<int>::iterator j = v5.end();   // Iterator pointing to one past the last element
    // To access the last element, you need to decrement j (i.e., j--)

    // Reverse iterators
    vector<int>::reverse_iterator k = v5.rend(); // Iterator pointing before the first element
    vector<int>::reverse_iterator l = v5.rbegin(); // Iterator pointing to the last element

    cout << v1.back() << endl;             // Print the last element of v1

    // Print the entire vector using iterators
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++) {
        cout << *i << " ";                  // Print elements in v1
    }
    cout << endl;

    // Using auto keyword for iteration
    for (auto i = v1.begin(); i != v1.end(); i++) {
        cout << *i << " ";                  // Print elements in v1
    }
    cout << endl;

    // Range-based for loop (for-each loop)
    for (auto i : v1) {
        cout << i << " ";                   // Print elements in v1
    }
    cout << endl;

    // Erase functions
    v5.erase(v5.begin() + 1);             // Remove the second element
    v5.erase(v5.begin(), v5.begin() + 2); // Remove the first two elements

    // Insert Function
    v1.insert(v1.begin(), 300);       // Insert 300 at the first position
    v1.insert(v1.begin() + 1, 3, 10);// Insert 3 elements of value 10 at the second position

    for (auto i : v1) {
        cout << i << " ";            // Print elements in v1 after insertions
    }
    cout << endl;

    // Insert multiple elements from another vector
    vector<int> elementsToInsert = {3, 4, 5, 6}; // Vector with elements to insert
    v1.insert(v1.begin() + 1, elementsToInsert.begin(), elementsToInsert.end()); // Insert elements

    for (auto i : v1) {
        cout << i << " ";                   // Print elements in v1 after inserting multiple elements
    }
    cout << endl;

    // Miscellaneous vector operations
    cout << v1.size();                     // Get the size of v1
    v1.pop_back();                         // Remove the last element
    v1.swap(v3);                           // Swap the contents of v1 and v3
    v3.clear();                            // Empty the vector v3
    cout << endl << v3.size();             // Print size of v3
    cout << endl << v3.empty();            // Print whether v3 is empty (true/false)(0/1)
    cout<<endl<<v5.back();                  // Prints last element

    return 0;
}