/*
A Set is a container that stores elements in a sorted order. 
It ensures that all elements are unique, meaning duplicate values cannot be stored.
*/

#include<iostream>
#include<set>

using namespace std;

int main(){

//Initialization
set<int> st;

st.insert(1);
st.insert(2);
st.insert(2); //it will not add 2 because dublicate cannot be stored.
st.insert(5);

// begin(), end(), rbegin(), rend(), size(),
// empty() and swap() are same as those of above.

auto it = st.find(3);




return 0;
}
