// Q.2. Count how many digits are present in the number.
// Input:
// 12345
// Output:
// Number of digits = 5

#include<iostream>
using namespace std;
int main()
{
    int count = 0;
    int num;

    cout<<"Enter the number : ";
    cin>>num;

    while(num!=0){
        num = num / 10;
        count++;
    }

    cout<<"Count is "<<count<<endl;
}