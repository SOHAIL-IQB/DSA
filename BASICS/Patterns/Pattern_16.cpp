/*

A
BB
CCC
DDDD
EEEEE            */

#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){
        char start = 'A'+i;   //This will increment the ascii value...

        for(int j=0; j<=i; j++){ 
            cout<<start;
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