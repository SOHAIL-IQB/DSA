//The __builtin_popcount() function is a function used to count the number of set bits (1s) 
// in a number’s binary representation.

#include <iostream>
using namespace std;

int main() {

    // ---------------------- Counting Set Bits in an Integer ----------------------

    int num = 29; // Binary representation: 11101 (4 set bits)

    // Using __builtin_popcount to count the number of 1s in an int (32-bit)
    int count = __builtin_popcount(num);

    cout << "Number of set bits in " << num << " is: " << count << endl;

    // ---------------------- Counting Set Bits in a Long Long ----------------------

    long long largeNum = 9223372036854775807LL; // A large number

    // Using __builtin_popcountll to count the number of 1s in a long long (64-bit)
    cout << "Number of set bits in " << largeNum << " is: " << __builtin_popcountll(largeNum) << endl;

    return 0;
}