#include <iostream>
using namespace std;

// Global variable
string companyName = "NexGen Solutions Pvt Ltd";

class Employee
{
private:
    int empId;
    string name;
    double salary;

public:
    static int totalEmployees;   // Static data member

    // Parameterized Constructor
    Employee(int id, string n, double s)
    {
        empId = id;
        name = n;
        salary = s;
        totalEmployees++;   // Increment when object created
    }

    // Display function
    void display()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "---------------------------" << endl;
    }

    // Static function
    static void showTotalEmployees()
    {
        cout << "Total Employees: " << totalEmployees << endl;
    }
};

// Static member initialization
int Employee::totalEmployees = 0;

int main()
{
    // Creating 5 employee objects
    Employee e1(101, "Rahul", 50000);
    Employee e2(102, "Amit", 55000);
    Employee e3(103, "Sneha", 60000);
    Employee e4(104, "Priya", 52000);
    Employee e5(105, "Rohit", 58000);

    // Display employee details
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

    // Show total employees
    Employee::showTotalEmployees();

    return 0;
}