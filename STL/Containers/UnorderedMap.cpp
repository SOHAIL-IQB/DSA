/*
An Unordered Map is an STL container that stores key-value pairs using a hash table. 
It allows unique keys but does not store keys in any specific order.
Both keys and values can be of any data type. Insert, find,and access operations 
have average time complexity of O(1),
but can be O(n) in the worst case due to hash collisions.
*/


#include <iostream>
#include <unordered_map> // For using unordered_map features

using namespace std;

int main() {
    unordered_map<int, int> mp; // Initialization (key-value pair of int type)

    // Storing values
    mp[1] = 2;  // Stores 2 with key 1 {1, 2}
    mp.emplace(3, 1); // Stores 1 with key 3 {3, 1}

    // Printing unordered_map contents
    for (auto it : mp) {
        cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Accessing value
    cout << mp[1] << endl;  // Prints value for key 1

    // Finding element
    auto it = mp.find(2);
    if (it != mp.end()) {
        cout << it->second << endl;  // Prints value for key 2

    }

    // Similar functions: 
    // erase(key), swap(other_map), size(), empty(), clear()

    /*
    Key Differences:
	• Map stores keys in sorted order, Multimap allows duplicates, and 
      Unordered Map does not maintain any order and uses hashing for faster lookups.
	• Map and Multimap have O(log n) time complexity for most operations,
      while Unordered Map has average O(1) time complexity.
    */

    return 0;

    
}

