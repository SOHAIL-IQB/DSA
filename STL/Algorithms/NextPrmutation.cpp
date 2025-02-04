#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    // ---------------------- Generating All Permutations ----------------------

    string s = "123"; // Initial sequence

    cout << "All permutations:" << endl;
    do {
        cout << s << endl; // Print the current permutation
    } while (next_permutation(s.begin(), s.end())); // Generate next permutation

    // ---------------------- Handling Unsorted Strings ----------------------

    string unsortedStr = "231"; // Unsorted sequence
    sort(unsortedStr.begin(), unsortedStr.end()); // Sort before generating permutations

    cout << "\nPermutations after sorting the unsorted string:" << endl;
    do {
        cout << unsortedStr << endl;
    } while (next_permutation(unsortedStr.begin(), unsortedStr.end()));

    return 0;
}