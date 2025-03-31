//
// Created by ekalb on 3/30/2025.
//

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"



class HourlyEmployee : public Employee
{
private:
    int hourlyRate;
    int hoursWorked;

public:
    HourlyEmployee();
    HourlyEmployee(string name, int id, double rate, int hours);

    double CalcSalary();
    void   DisplayInfo() override;
};



#endif //HOURLYEMPLOYEE_H
