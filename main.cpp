#include "CommissionEmployee.h"
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"


int main()
{
    Employee *employees[5];

    employees[0] = new SalariedEmployee("Dunly", 1, 50000);
    employees[1] = new SalariedEmployee("Hugo", 2, 85000);
    employees[2] = new HourlyEmployee("Terry Bogard", 3, 25.50, 35);
    employees[3] = new HourlyEmployee("Akuma", 4, 35.75, 45);
    employees[4] = new CommissionEmployee("Sol Badguy", 5, 175000, 9.5, 75000);


    employees[0]->DisplayInfo();
    employees[1]->DisplayInfo();
    employees[2]->DisplayInfo();
    employees[3]->DisplayInfo();
    employees[4]->DisplayInfo();


    return 0;
}
