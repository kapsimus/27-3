#pragma once
#include <vector>
#include <cmath>
#include "person.h"
#include "employee.h"

class Manager: public Person {
    std::vector<Employee*> employeesList;
    int command = 0;

private:
    static Objective generateObjective();
    int getObjectivesCount();
    void sendObjectives();

public:
    Manager();
    Manager(std::string position);
    int getFreeEmployees();
    void setCommand(int newCommand, int number);
};
