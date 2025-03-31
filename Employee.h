//
// Created by ekalb on 3/30/2025.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;


class Employee
{
protected:
    string name;
    int    id;

public:
    Employee();
    Employee(string name, int id);

    virtual ~Employee();
    virtual void DisplayInfo();
};



#endif //EMPLOYEE_H
