/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <iostream>
using namespace std;

void pattern(int n){
    
    int start = 1;

    for(int i=1; i<=n; i++){
        if(i%2==0)start = 0;
        else start = 1;       //for start of every line;

        for(int j=1; j<=i; j++){

            cout<<start<<" ";
            start = 1 - start;  //This will flip 0 to 1 and 1 to
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