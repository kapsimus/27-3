#pragma once
#include <vector>
#include "person.h"
#include "employee.h"

class Manager: public Person {
    std::vector<Employee> employeesList;
public:
    Manager();
};
