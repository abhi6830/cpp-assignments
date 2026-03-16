// Q.4. Write a program to Print Fibonacci series
// Given an integer N, print the first N Fibonacci numbers.
// The Fibonacci sequence is:
// 0 1 1 2 3 5 8 13 ...
// Input:
// 6
// Output:
// 0 1 1 2 3 5

#include<iostream>
using namespace std;
int main()
{
    int a = 0,b = 1;
    int num;
    cout<<"Enter an number : "<<endl;
    cin>>num;

    for(int i = 1;i<=num;i++){
        cout<<" "<<a;
        int c = a + b;
        a = b;
        b = c;
        
    }
}