/*
A Multimap is similar to a Map, but allows multiple values for the same key.
It stores key-value pairs with sorted keys, and both keys and values can be of 
any data type. Time complexity for insert, find, and access is O(log n), like Map.
*/


#include <iostream>
#include <map> // For using multimap features

using namespace std;

int main() {
    multimap<int, int> mp; // Initialization (key-value pair of int type)

    // Storing values
    mp.insert({1, 2});  // Inserts {1, 2}
    mp.emplace(3, 1); // Inserts {3, 1}

    // Printing multimap contents
    for (auto it : mp) {
        cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }

    // Accessing values using the key
    auto it = mp.find(1);
    if (it != mp.end()) {
        cout << it->second << endl; // Prints value for key 1
    }

    return 0;
}

// Similar functions:
// erase(key), swap(other_map), size(), empty(), clear()