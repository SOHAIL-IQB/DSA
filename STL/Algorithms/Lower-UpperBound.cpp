#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 5, 6, 7};

    // ---------------------- Lower Bound ----------------------

    // Finds the first element that is greater than or equal to 4
   auto lb = lower_bound(vec.begin(), vec.end(), 4);  // Finds first element >= 4
    cout << "Lower Bound: " << (lb - vec.begin()) << endl;  // Converts iterator to index
    


    // ---------------------- Upper Bound ----------------------

    // Finds the first element that is strictly greater than 4
    auto ub = upper_bound(vec.begin(), vec.end(), 4);  // Finds first element > 4
    cout << "Upper Bound: " << (ub - vec.begin()) << endl;  // Converts iterator to index

    return 0;
}