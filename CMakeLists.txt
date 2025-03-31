cmake_minimum_required(VERSION 3.30)
project(Virtual_Methods_Practice)

set(CMAKE_CXX_STANDARD 20)

add_executable(Virtual_Methods_Practice main.cpp
        Employee.cpp
        Employee.h
        SalariedEmployee.cpp
        SalariedEmployee.h
        HourlyEmployee.cpp
        HourlyEmployee.h
        CommissionEmployee.cpp
        CommissionEmployee.h)
