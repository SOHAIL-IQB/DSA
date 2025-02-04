#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <functional>

using namespace std;

int main() {
    // ---------------------- 1. Reverse ----------------------
    // Reverses the order of elements in the vector.
    // Example: [1, 2, 3, 4, 5] becomes [5, 4, 3, 2, 1]
    vector<int> vec3 = {1, 2, 3, 4, 5};
    reverse(vec3.begin(), vec3.end());
    cout << "Reversed Vector: ";
    for (int i : vec3) cout << i << " ";
    cout << endl;

    // ---------------------- 2. Fill and Fill_n ----------------------
    // Fill: Fills the entire range with the specified value.
    // Example: [0, 0, 0, 0, 0] becomes [3, 3, 3, 3, 3]
    // Fill_n: Fills the first N elements with the specified value.
    // Example: [3, 3, 3, 3, 3] becomes [7, 7, 7, 3, 3]
    vector<int> vec4(5, 0); // Vector of size 5, initialized with 0
    fill(vec4.begin(), vec4.end(), 3);
    cout << "Filled Vector: ";
    for (int i : vec4) cout << i << " ";
    cout << endl;

    fill_n(vec4.begin(), 3, 7);
    cout << "Partially Filled Vector (first 3 elements): ";
    for (int i : vec4) cout << i << " ";
    cout << endl;

    // ---------------------- 3. Transform ----------------------
    // Applies the given function to each element in the range and stores the result in another container.
    // Example: [1, 2, 3, 4, 5] becomes [1, 4, 9, 16, 25] (squared values)
    vector<int> vec5 = {1, 2, 3, 4, 5};
    vector<int> result(vec5.size());
    transform(vec5.begin(), vec5.end(), result.begin(), [](int x) { return x * x; });
    cout << "Transformed Vector (squared values): ";
    for (int i : result) cout << i << " ";
    cout << endl;

    // ---------------------- 4. Remove and Remove_if ----------------------
    // Remove: Removes all occurrences of a specified value from the container.
    // Example: [1, 2, 3, 4, 5, 5, 6] becomes [1, 2, 3, 4, 6]
    // Remove_if: Removes all elements that satisfy the given condition.
    // Example: [1, 2, 3, 4, 5] becomes [1, 3, 5] (removes even numbers)
    vector<int> vec6 = {1, 2, 3, 4, 5, 5, 6};
    vec6.erase(remove(vec6.begin(), vec6.end(), 5), vec6.end());
    cout << "Vector after remove (remove 5): ";
    for (int i : vec6) cout << i << " ";
    cout << endl;

    vec6.erase(remove_if(vec6.begin(), vec6.end(), [](int x) { return x % 2 == 0; }), vec6.end());
    cout << "Vector after remove_if (remove even numbers): ";
    for (int i : vec6) cout << i << " ";
    cout << endl;

    // ---------------------- 5. Accumulate ----------------------
    // Calculates the sum (or any binary operation) of the elements in a range.
    // Example: [1, 2, 3, 4, 5] gives 15 (sum of elements)
    vector<int> vec7 = {1, 2, 3, 4, 5};
    int sum = accumulate(vec7.begin(), vec7.end(), 0);
    cout << "Accumulate (sum): " << sum << endl;

    // ---------------------- 6. Min and Max ----------------------
    // Min: Finds the minimum element in a container.
    // Max: Finds the maximum element in a container.
    // Example: Min of [1, 3, 2, 4, 5] is 1, Max is 5
    vector<int> vec9 = {1, 3, 2, 4, 5};
    auto min_elem = *min_element(vec9.begin(), vec9.end());
    auto max_elem = *max_element(vec9.begin(), vec9.end());
    cout << "Min Element: " << min_elem << ", Max Element: " << max_elem << endl;

    return 0;
}