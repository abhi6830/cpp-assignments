// Q.
// Write a program to reverse the array elements.

// Example
// Input: 1 2 3 4 5
// Output: 5 4 3 2 1

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10,20,30,40,50};
    int reverse;


    cout<<"Reverse Array : "<<endl;
    for(int i = 5 - 1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}
