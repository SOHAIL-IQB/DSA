/*A pair is a container that holds two heterogeneous objects
(of potentially different types) together as a single unit. It is 
defined in the <utility> header file and is particularly useful for
returning two related values from a function.
*/

#include <iostream>
#include <utility>//Incluede this header for using pair
using namespace std;

int main(){

    // initialization
    pair<int, int> p1 = {13, 15};
    cout << "p1.first: " << p1.first << ", p1.second: " << p1.second << endl;

    // Nested Pair
    pair<int, pair<int, int>> p2 = {11, {39, 15}};
    cout << "p2.first: " << p2.first << endl;
    cout << "p2.second.first: " << p2.second.first << endl;
    cout << "p2.second.second: " << p2.second.second << endl;

    // Pair of array
    pair<int, int> arr[] = {{1, 3}, {2, 3}, {4, 5}};
    cout << "arr[1].second: " << arr[1].second << endl;

    // Using make_pair
    pair<int, string> p3 = make_pair(5, "Hello");  //No need to define data type
    cout << "p3.first: " << p3.first << ", p3.second: " << p3.second << endl;

    // Swapping pairs
    pair<int, string> p4 = {10, "World"};
    swap(p3, p4);
    cout << "After swap, p3: " << p3.first << ", " << p3.second << endl;
    cout << "After swap, p4: " << p4.first << ", " << p4.second << endl;

    // Comparing pairs
    pair<int, int> p5 = {1, 3};
    pair<int, int> p6 = {2, 3};
    cout << "Is p5 < p6? " << (p5 < p6) << endl; // True because first element of p5 is less than p6

    return 0;
}