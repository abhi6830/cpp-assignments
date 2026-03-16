
//WAP to print Floyd’s Triangle.

#include<iostream>
using namespace std;

int main()
{
    int num = 0;

    for(int i = 1;i<=5;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }
}