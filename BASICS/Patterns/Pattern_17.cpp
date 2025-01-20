/*
    A
   ABA
  ABCAB
 ABCDABC
ABCDEABCD          */

#include <iostream>
using namespace std;

void pattern(int n){

    for(int i=0; i<n; i++){

        char ch = 'A';
        int breakpoint = (2*i+1)/2; //for decrementing after half..


        for(int j=1; j<=n-1-i; j++){    //Space
            cout<<" ";
        }

        for(int j=1; j<=2*i+1; j++){    //Alphabets
            cout<<ch;

            if(j<=breakpoint) ch++; //before the half
            else ch--; //after the half
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