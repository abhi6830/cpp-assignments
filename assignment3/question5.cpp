// Q.
// Write a function to calculate the sum of two numbers using default arguments.

// Example

// add(int a=10, int b=20)

// Call function with :

// add()
// add(50)
// add(10,20)

#include<iostream>
using namespace std;
int add(int a = 10,int b = 20,int c = 30);

int main()
{
    add(10);
    add(10,20);
    add(10,20,30);
}

int add(int p,int q,int r){
    int total = p + q + r;
    cout<<"Total : "<<total<<endl; 
}