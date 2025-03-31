//
// Created by ekalb on 3/30/2025.
//

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"


class SalariedEmployee : public Employee
{
private:
    int monthlySalary;

public:
    SalariedEmployee();
    SalariedEmployee(string name, int id, int salary);

    double CalcSalary();
    void   DisplayInfo() override;
};



#endif //SALARIEDEMPLOYEE_H
