// Q.
// Write a C++ program to find the largest element in an array.

// #include<iostream>
// using namespace std;
// int main()
// {

//     int arr[5] = {1,2,3,4,5};
//     int largest = arr[0];

//     cout<<"Enter an element : "<<endl;
//     for(int i = 0;i<5;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }

//     }

//     cout<<"leargest Elements is : "<<largest<<endl;


// }

#include<iostream>
using namespace std;
int main()
{

    int arr[5];
    cout<<"Enter array elements : ";

    for(int i = 0;i<5;i++){
        cin>>arr[i];

    }

    int largest = arr[0];

    for(int i = 0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    cout<<"Lagrest element of array is : "<<largest;


}