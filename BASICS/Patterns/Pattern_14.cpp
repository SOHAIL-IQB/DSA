/*

A
AB
ABC
ABCD
ABCDE            */

#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){

        for(char j='A'; j<='A'+i; j++){ //This will increment the ascii value...
            cout<<j;
        }

    cout<<endl;

    }
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    pattern(n);
}