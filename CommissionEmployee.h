//
// Created by ekalb on 3/30/2025.
//

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"



class CommissionEmployee : public Employee
{
private:
    int    baseSalary;
    double commissionRate;
    int    sales;
    double commissionPay;

public:
    CommissionEmployee();
    CommissionEmployee(string name, int id, int baseSal, double rate, int sal);

    double CalcSalary();
    double CalcCommission();
    void   DisplayInfo() override;
};



#endif //COMMISSIONEMPLOYEE_H
