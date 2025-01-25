/*
Map is a STL container which stores everything in respect of key and values pairs,
keys and values can be any DataType

Map stores Unique key in sorted order.
*/

#include<iostream>
#include<map> //for using map features

using namespace std;

int main(){

    //Initialization
    map <int, int> mp; //both key and value are of int DataType

    map <int, pair<int,int>> mpp;  // key is of type int and value is of pair DataType
    map <pair<int,int>, int> mpp2; // Vise-versa

    //Storing values 

    mp[1] = 2;  //it stores 2 on the key 1 {1,2}
    mp.emplace(3,1); // stores 1 on the key 3 {3,1}
    mpp.emplace(1, make_pair(2, 1));
    mpp2[{1,3}] = 10;

    //Using insert
    mp.insert({2,6});
    mpp.insert({2, {4, 9}});

    for (auto it : mpp) {
        cout << "Key: " << it.first << ", Value: (" << it.second.first << ", " << it.second.second << ")\n";
    }
    for (auto it : mp) {
        cout << "Key: " << it.first << ", Value: " << it.second << "\n";
    }
    
    cout<<mp[1]<<endl; //Prints the value of key 1;
    cout<<mp[5]<<endl; //Prints 0 because key with value 5 is not present

    auto it  = mp.find(2); //it gives the address of key 2  //if the key is not presenet than it points just after the end.
    cout << it->second;  //gives the value
    
    return 0;
}



