/*
A Multiset is the same as a Set, with the key difference being that it allows 
multiple occurrences of the same value (i.e., duplicate elements can be stored). 
It maintains the elements in sorted order and provides logarithmic time complexity 
for most operations.
*/

#include <iostream>
#include <set> // Required for multiset

using namespace std;

int main() {

    // **Initialization**
    multiset<int> ms; // Create an empty multiset

    // **Insertion**
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2); // Adds another 2 (duplicates are allowed)
    ms.insert(2); 
    ms.insert(2); 
    ms.insert(5);

    cout << "Multiset elements after insertion: ";
    for (auto i : ms) {
        cout << i << " "; // Output: 1 2 2 2 2 3 5
    }
    cout << endl;

    // **Count Function**
    cout << "Count of 2 in the multiset: " << ms.count(2) << endl; // Output: 4
    cout << "Count of 4 in the multiset: " << ms.count(4) << endl; // Output: 0

    // **Erase Function**
    ms.erase(2); // Removes all occurrences of 2
    cout << "Multiset after erasing all occurrences of 2: ";
    for (auto i : ms) {
        cout << i << " "; // Output: 1 3 5
    }
    cout << endl;

    ms.insert(2);
    ms.insert(2); 
    ms.insert(2); 
    ms.insert(2);
    ms.insert(2);
    ms.insert(2); 
    ms.insert(2); 

    // Erase a specific occurrence
    ms.erase(ms.find(2)); // Removes only the first occurrence of 2

    // Erase a specific range of occurrences
    /*
    If you want to remove a specific number of occurrences, 
    you can pass the iterator to the first occurrence and provide a range using iterators.
    */
    auto start = ms.find(2); // Iterator pointing to the first occurrence of 2
    auto end = next(start, 2); // Move 2 steps ahead from the first occurrence
    ms.erase(start, end); // Removes the first two occurrences of 2

    ms.erase(ms.find(2), next(ms.find(2),2)); //same as upper technique.



    return 0;

}