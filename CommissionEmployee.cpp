//
// Created by ekalb on 3/30/2025.
//

#include "CommissionEmployee.h"


CommissionEmployee::CommissionEmployee()
{
    baseSalary     = 0;
    commissionRate = 0;
    sales          = 0;
    commissionPay  = 0;
}

CommissionEmployee::CommissionEmployee(string name, int id, int baseSal, double rate, int sal)
    : Employee(name, id)
{
    baseSalary     = baseSal;
    commissionRate = rate;
    sales          = sal;
}

double CommissionEmployee::CalcSalary()
{
    return baseSalary + (commissionRate * sales);
}

double CommissionEmployee::CalcCommission()
{
    commissionPay = (commissionRate / 100) * sales;

    return commissionPay;
}

void CommissionEmployee::DisplayInfo()
{
    Employee::DisplayInfo();
    cout << "Base Salary: $"    << baseSalary        << endl;
    cout << "Commission Rate: " << commissionRate    << "%"  << endl;
    cout << "Sales: $"          << sales             << endl;
    cout << "Commission Pay: $" << CalcCommission()  << endl << endl;;

}