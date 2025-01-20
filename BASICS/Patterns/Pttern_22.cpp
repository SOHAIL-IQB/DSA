/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4 
4 3 3 3 3 3 4
4 4 4 4 4 4 4

We have to convert this matrix into (n - element) form

0 0 0 0 0 0 0
0 1 1 1 1 1 0
0 1 2 2 2 1 0
0 1 2 3 2 1 0
0 1 2 2 2 1 0
0 1 1 1 1 1 0
0 0 0 0 0 0 0

now every element value is equals to the distance of closest boundary.
we can retrive the original value by subtracting every value from n. (n - new element).
*/

#include<iostream>
using namespace std;

void pattern(int n){

    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i; 
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;


            cout <<(n - min(min(right,left), min(top, bottom)))<<" ";

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