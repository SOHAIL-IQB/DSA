/*

1        1
12      21
123    321
1234  4321
1234554321

*/

#include <iostream>
using namespace std;

void pattern(int n){
    
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){  //Numbers
            cout<<j;
        }

        for(int j=1; j<=2*n-2*i; j++){  //Space
            cout<<" ";
        }

        for(int j=i;j>=1;j--){  //Numbers in reverse order
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