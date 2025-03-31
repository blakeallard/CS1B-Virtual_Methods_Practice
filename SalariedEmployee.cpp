//
// Created by ekalb on 3/30/2025.
//

#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee()
{
    monthlySalary = 0;
}

SalariedEmployee::SalariedEmployee(string name, int id, int salary)
    : Employee(name, id)
{
    monthlySalary = salary;
}

double SalariedEmployee::CalcSalary()
{
    return monthlySalary;
}

void SalariedEmployee::DisplayInfo()
{
    Employee::DisplayInfo();
    cout << "Employee Type: Salaried"            << endl;
    cout << "Monthly Salary: $" << monthlySalary << endl << endl;
}