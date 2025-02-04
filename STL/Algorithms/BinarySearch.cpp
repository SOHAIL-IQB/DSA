#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    // ---------------------- Binary Search ----------------------
    
    // Binary search to check if an element exists in the sorted container
    bool found = binary_search(vec.begin(), vec.end(), 4);
    cout << "Element found: " << found << endl; // Output: 1 (true)

    // If the element exists in the range, binary_search returns true, otherwise false
    return 0;
}