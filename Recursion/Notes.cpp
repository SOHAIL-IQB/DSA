/*
======================================
          RECURSION NOTES
======================================

Definition:
Recursion is a programming technique where a function calls itself directly or 
indirectly to solve a problem. It breaks down a problem into smaller subproblems 
of the same type.

Base Case:
A condition in recursion that stops further recursive calls, preventing infinite loops.

Recursive Case:
The condition where the function continues to call itself with a modified parameter.

======================================
         IMPORTANT TOPICS
======================================
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ---------------------- 1. Factorial ----------------------
    // Calculates the factorial of a number using recursion.
    // Example: factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
    function<int(int)> factorial = [&](int n) {
        if (n == 0 || n == 1) return 1; // Base case
        return n * factorial(n - 1); // Recursive case
    };
    cout << "Factorial of 5: " << factorial(5) << endl;

    // ---------------------- 2. Fibonacci ----------------------
    // Generates the nth Fibonacci number using recursion.
    // Example: fib(5) = 5th Fibonacci number = 5
    function<int(int)> fibonacci = [&](int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    };
    cout << "Fibonacci(5): " << fibonacci(5) << endl;

    // ---------------------- 3. Reverse an Array ----------------------
    // Reverses an array using recursion.
    vector<int> arr = {1, 2, 3, 4, 5};
    function<void(int, int)> reverseArray = [&](int start, int end) {
        if (start >= end) return; // Base case
        swap(arr[start], arr[end]);
        reverseArray(start + 1, end - 1); // Recursive case
    };
    reverseArray(0, arr.size() - 1);
    cout << "Reversed Array: ";
    for (int i : arr) cout << i << " ";
    cout << endl;

    // ---------------------- 4. Palindrome Check ----------------------
    // Checks if a string is a palindrome using recursion.
    string str = "madam";
    function<bool(int, int)> isPalindrome = [&](int left, int right) {
        if (left >= right) return true; // Base case
        if (str[left] != str[right]) return false;
        return isPalindrome(left + 1, right - 1);
    };
    cout << "Is Palindrome: " << (isPalindrome(0, str.size() - 1) ? "Yes" : "No") << endl;

    // ---------------------- 5. Binary Search ----------------------
    // Performs binary search using recursion.
    vector<int> sortedArr = {1, 3, 5, 7, 9, 11};
    function<int(int, int, int)> binarySearch = [&](int left, int right, int target) {
        if (left > right) return -1; // Base case: not found
        int mid = left + (right - left) / 2;
        if (sortedArr[mid] == target) return mid;
        if (sortedArr[mid] > target) return binarySearch(left, mid - 1, target);
        return binarySearch(mid + 1, right, target);
    };
    cout << "Index of 7 in sorted array: " << binarySearch(0, sortedArr.size() - 1, 7) << endl;

    return 0;
}
