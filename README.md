This program simulates an employee management system where different types of employees (salaried, hourly, and commission-based) are created, stored in an array, and their information is displayed. The program demonstrates the use of inheritance and polymorphism in C++ to handle different types of employees and calculate their compensation.

Key Features:
Polymorphism: The program uses base class pointers (Employee*) to handle various types of employees, including SalariedEmployee, HourlyEmployee, and CommissionEmployee. Each employee type has its own specific attributes and behaviors.

Inheritance: All employee types inherit from the base class Employee, and they have common attributes such as name and id. The derived classes add specific attributes (e.g., salary for SalariedEmployee, hourly rate and hours worked for HourlyEmployee, commission rate and sales for CommissionEmployee).

Dynamic Memory Allocation: The program creates objects for employees using dynamic memory allocation (new), allowing for flexible management of employee objects.

Display Employee Information: Each employee’s specific information is displayed using the DisplayInfo function, which is overridden in each derived class.

Class Hierarchy:
Employee (Base Class): The base class that defines common attributes and methods for all employees (e.g., name, id, DisplayInfo()).

SalariedEmployee (Derived Class): Represents employees who are paid a fixed salary.

HourlyEmployee (Derived Class): Represents employees who are paid by the hour based on the hourly rate and hours worked.

CommissionEmployee (Derived Class): Represents employees who earn commissions based on sales and also have a base salary.

Files Included:
Employee.h – Declares the base Employee class with common attributes and methods.

Employee.cpp – Implements the Employee class.

SalariedEmployee.h – Declares the SalariedEmployee class, derived from Employee.

SalariedEmployee.cpp – Implements the SalariedEmployee class.

HourlyEmployee.h – Declares the HourlyEmployee class, derived from Employee.

HourlyEmployee.cpp – Implements the HourlyEmployee class.

CommissionEmployee.h – Declares the CommissionEmployee class, derived from Employee.

CommissionEmployee.cpp – Implements the CommissionEmployee class.

main.cpp – The main program that creates employee objects, stores them in an array, and displays their information.

