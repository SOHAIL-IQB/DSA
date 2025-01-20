/*

*
**
***
****
*****
****
***
**
*


*/
#include <iostream>
using namespace std;

void pattern(int n){

    for(int i=1; i<=2*n-1; i++){
        
        int stars = i;// initialize star variable because this will not effect i...
        if(i>n) stars = 2*n-i;//values of stars after n input..

        for(int j=1; j<=stars; j++){
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
