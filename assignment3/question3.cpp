// Q.
// Write a C++ program to count even and odd numbers in an array.

// Example
// Array: 1 2 3 4 5
// Even = 2
// Odd = 3

#include<iostream>
using namespace std;
int main()
{

    int even = 0;
    int odd = 0;

    int arr[5];
    cout<<"Enter an Elements : "<<endl;

    for(int i = 0;i<5;i++){
        cin>>arr[i];
    }

    for(int i = 0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }

    cout<<"Even numbers : "<<even<<endl;
    cout<<"Odd numbers : "<<odd<<endl;

}
