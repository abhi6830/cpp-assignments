// Q.
// Write overloaded functions to find area of:
// -Square
// -Rectangle

// Example

// area(int side)
// area(int length, int breadth)

#include<iostream>
using namespace std;

int area(int sqr){
    //int square = sqr*sqr;
    //cout<<"Square is "<<square<<endl;
    return sqr*sqr;
}

int area(int len,int bre){
    //int rect = len + bre;
    //cout<<"Rectangle is "<<rect<<endl;
    return len * bre; 
}

int main()
{
    //area(5);
    //area(10,20);
    cout<<"Area of square is "<<area(5)<<endl;
    cout<<"Area of rectangle is "<<area(10,20)<<endl;
}