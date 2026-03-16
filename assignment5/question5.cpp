// Q.5. Write a program to swap two numbers without using a third variable.

#include<iostream>
using namespace std;
int main()
{
    int a = 5,b = 10;
    
    cout<<"Before swapping : "<<a<<" "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swapping : "<<a<<" "<<b<<endl;
}