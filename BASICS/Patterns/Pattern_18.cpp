/*
E
D E
C D E
B C D E
A B C D E

*/


#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=1; i<=n; i++){

        char start = 'A'+n-i;

        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start++;
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