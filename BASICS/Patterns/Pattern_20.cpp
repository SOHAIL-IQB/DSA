/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *


*/

#include <iostream>
using namespace std;

void pattern(int n){

    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        int space = 2*n-2*i;
        if(i>n) stars = 2*n-i, space = 2*i-2*n; //This will work after the half line of input..

        for(int j=1; j<=stars; j++){//Stars
            cout<<"*";
        }

        for(int j= 1; j<=space; j++){ //Spaces
            cout<<" ";
        }

        for(int j=1; j<=stars; j++){//Stars
            cout<<"*";
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