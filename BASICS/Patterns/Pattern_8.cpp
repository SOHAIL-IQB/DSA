
/*

*********
 *******
  *****
   ***
    *
 
*/

#include <iostream>
using namespace std;

void pattern(int n){

    for(int i=0; i<n; i++){

        for(int j=1; j<=i; j++){    //Space
            cout<<" ";
        }

        for(int j=1; j<=2*n-2*i-1; j++){    //Stars
            cout<<"*";
        }

        for(int j=1; j<=i; j++){    //Space
            cout<<" ";
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