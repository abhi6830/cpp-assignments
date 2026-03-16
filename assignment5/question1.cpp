
// Q.1. Create a class Analyzer that stores numbers dynamically.
// Requirements:
// Accept number of elements N.
// Dynamically allocate array.
// Accept numbers.
// Find and print:
// Maximum number
// Minimum number
// Average value

#include<iostream>
using namespace std;

class Analyzer
{
private:
    int *arr;
    int n;

public:
    void input()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        arr = new int[n];  

        cout << "Enter " << n << " numbers:\n";
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void analyze()
    {
        int max = arr[0];
        int min = arr[0];
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] > max)
                max = arr[i];

            if(arr[i] < min)
                min = arr[i];

            sum += arr[i];
        }

        float avg = (float)sum / n;

        cout << "\nMaximum number = " << max << endl;
        cout << "Minimum number = " << min << endl;
        cout << "Average value = " << avg << endl;
    }

    ~Analyzer()
    {
        delete[] arr;  
    }
};

int main()
{
    Analyzer a;

    a.input();
    a.analyze();

    return 0;
}