//
// Created by ekalb on 3/30/2025.
//

#include "Employee.h"

Employee::Employee()
{
    name = "";
    id   = 0;
}

Employee::Employee(string name, int id)
{
    this->name = name;
    this->id   = id;
}

Employee::~Employee()
{

}

void Employee::DisplayInfo()
{
    cout << "Employee ID: "   << id   << endl;
    cout << "Employee Name: " << name << endl << endl;
}