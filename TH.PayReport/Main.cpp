// Pay Report
// Tyler Hanson

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};

float WeeklyPayCalc(float HoursWorked, float HourlyRate)
{
    return HoursWorked * HourlyRate;
}
int main()
{
    cout << "Pay Reports" << "\n";
    cout << "---------------------------------------------------" << "\n";
    cout << "Please enter a number of employees to process: ";
    int numEmployees = 0;
    cin >> numEmployees;
    

    Employee* employees = new Employee[numEmployees];

    // Have user enter the data of the employee(s)
    for (int i = 0; i < numEmployees; i++)
    { 
        cout << "\nEmployee ID: ";
        cin >> employees[i].ID;

        cout << "First Name: ";
        cin >> employees[i].FirstName;

        cout << "Last Name: ";
        cin >> employees[i].LastName;

        cout << "Hours Worked: ";
        cin >> employees[i].HoursWorked;

        cout << "Hourly Rate: ";
        cin >> employees[i].HourlyRate;
    }

    // Display total pay report
    float totalpay = 0.0;
    // Display the pay report of the Employee(s)
    cout << "\nPay Report\n";
    cout << "---------------------------------------------------" << "\n";
    for (int i = 0; i < numEmployees; i++)
    {
        float weeklyPay = WeeklyPayCalc(employees[i].HoursWorked, employees[i].HourlyRate);
        totalpay += weeklyPay;

        cout << "Employee ID: " << employees[i].ID << "\n";
        cout << "First Name: " << employees[i].FirstName << "\n";
        cout << "Last Name: " << employees[i].LastName << "\n";
        cout << "Weekly Pay: " << weeklyPay << "\n";
        cout << "---------------------------------------------------" << "\n";
    }

    
    // Display the total pay for all employees
    cout << "\nTotal Pay: $" << totalpay;

    // Free up memory
    delete[] employees;


        (void)_getch();
	    return 0;
}