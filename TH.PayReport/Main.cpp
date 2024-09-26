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

float WeeklyPayCalc()
{

}
int main()
{
    cout << "Pay Reports" << "\n";
    cout << "---------------------------------------------------" << "\n";
    cout << "Please enter a number of employees to process: ";
    int numEmployees = 0;
    cin >> numEmployees;
    
    Employee* employees = new Employee[numEmployees];
    for (int i = 0; i < numEmployees, i++)
    { 
        cout << "Employee ID: ";
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
	(void)_getch();
	return 0;
}