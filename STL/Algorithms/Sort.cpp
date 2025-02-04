#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    vector<int> vec = {3, 4, 6, 3, 8, 9};
    int arr[] = {3, 5, 7, 8, 3};

    // ---------------------- Sorting an Array ----------------------
    
    // Sorting the entire array in ascending order
    sort(arr, arr + 5);

    // Sorting the array in descending order
    sort(arr, arr + 5, greater<int>()); // Pass greater<int>() as the 3rd argument

    // ---------------------- Sorting a Vector ----------------------

    // Sorting the entire vector in ascending order
    sort(vec.begin(), vec.end());

    // Sorting the vector in descending order
    sort(vec.begin(), vec.end(), greater<int>());

    // ---------------------- Partial Sorting ----------------------

    // Sorting only part of the vector (from the 3rd element to the end)
    sort(vec.begin() + 2, vec.end());

    return 0;
}