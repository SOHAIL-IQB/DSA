/*
An Unordered Set is a collection of unique elements, 
where duplicates are not allowed. It does **not** maintain the elements in sorted order, 
and it provides average constant time complexity O(1) for most operations (due to hashing).
*/

#include <iostream>
#include <unordered_set> // Required for unordered_set

using namespace std;

int main() {

    // **Initialization**
    unordered_set<int> us; // Create an empty unordered_set

    // **Insert elements (duplicates are not allowed in unordered_set)**
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(40);
    us.insert(10); // This duplicate will be ignored

    // **Display elements (order is not guaranteed in unordered_set) **
    // It has randomized order ie.. elements are stored in random order.
    cout << "Unordered set elements (duplicates not allowed): "; 
    for (const int& num : us) {
        cout << num << " ";
    }
    cout << endl;


    /* 

    * lower_bound and upper_bound function does not works,
    * rest all functions are same as above, 
    * it does not stores in any particular order 
    * it has a better complexity than set in most cases, 
      except some when collision happens
    */





   return 0;


}