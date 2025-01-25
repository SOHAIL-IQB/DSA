/*
Map is an STL container that stores key-value pairs.
Both keys and values can be of any data type.

Maps store unique keys in sorted order.
*/

#include <iostream>
#include <map> // For using map features

using namespace std;

int main() {
    // Initialization
    map<int, int> mp; // Both key and value are of int data type

    map<int, pair<int, int>> mpp;  // Key is of type int and value is of pair data type
    map<pair<int, int>, int> mpp2; // Reverse: Key is a pair of ints, and value is int

    // Storing values
    mp[1] = 2;  // Stores 2 with key 1 {1, 2}
    mp.emplace(3, 1); // Stores 1 with key 3 {3, 1}
    mpp.emplace(1, make_pair(2, 1)); // Stores pair (2, 1) with key 1
    mpp2[{1, 3}] = 10; // Stores 10 with key {1, 3}

    // Using insert
    mp.insert({2, 6}); // Inserts {2, 6} into the map
    mpp.insert({2, {4, 9}}); // Inserts {2, {4, 9}} into the map

    // Displaying the contents of 'mpp' (map of pairs)
    for (auto it : mpp) {
        cout << "Key: " << it.first << ", Value: (" << it.second.first << ", " << it.second.second << ")\n";
    }

    // Displaying the contents of 'mp' (map of integers)
    for (auto it : mp) {
        cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Accessing values using the key
    cout << mp[1] << endl;  // Prints the value for key 1
    cout << mp[5] << endl;  // Prints 0 because key 5 is not present

    // Using find to search for a specific key
    auto it = mp.find(2); // Finds the key 2
    if (it != mp.end()) { //If key is not present it will give the address of just after end
        cout << it->second << endl; // Prints the value for key 2
    } else {
        cout << "Key not found." << endl;
    }

    // Lower bound and upper bound
    auto lb = mpp.lower_bound(1); // Finds the first element not less than key 1
    auto ub = mp.upper_bound(2);  // Finds the first element greater than key 2

    // Example of erase, swap, size, empty, and other functions that work similarly across many STL containers:
    // erase(key) - Removes the element by key.
    // swap(other_map) - Swaps contents with another map.
    // size() - Returns the number of elements in the map.
    // empty() - Returns true if the map is empty.
    // clear() - Removes all elements from the map.

    return 0;
}
