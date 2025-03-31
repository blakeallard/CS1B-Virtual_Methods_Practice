//
// Created by ekalb on 3/30/2025.
//

#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee()
{
    hourlyRate  = 0;
    hoursWorked = 0;
}

HourlyEmployee::HourlyEmployee(string name, int id, double rate, int hours)
    : Employee(name, id)
{
    hourlyRate  = rate;
    hoursWorked = hours;
}

double HourlyEmployee::CalcSalary()
{
    return hourlyRate * hoursWorked;
}

void HourlyEmployee::DisplayInfo()
{
    Employee::DisplayInfo();
    cout << "Employee Type: Hourly"           << endl;
    cout << "Hourly Rate: $"  << hourlyRate   << endl;
    cout << "Hours Worked: "  << hoursWorked  << endl;
    cout << "Total Salary: $" << CalcSalary() << endl << endl;
}
