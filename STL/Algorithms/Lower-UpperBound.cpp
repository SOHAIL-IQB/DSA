#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 5, 6, 7};

    // ---------------------- Lower Bound ----------------------

    // Finds the first element that is greater than or equal to 5
    auto lb = lower_bound(vec.begin(), vec.end(), 5);
    cout << "Lower bound of 5: " << *lb << endl; // Output: 5
    
    //if you need the index then you shoud subtract the strting index


    // ---------------------- Upper Bound ----------------------

    // Finds the first element that is strictly greater than 5
    auto ub = upper_bound(vec.begin(), vec.end(), 5);
    cout << "Upper bound of 5: " << *ub << endl; // Output: 6

    return 0;
}