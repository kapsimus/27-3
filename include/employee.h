#pragma once
#include <iostream>
#include "person.h"

enum Objective {
    A,
    B,
    C,
    None
};

class Employee: public Person {
    Objective objective = None;
public:
    Employee();
    Employee(std::string position);
    void setObjective(Objective newObjective);
    Objective getObjective();
    std::string getStrObjective();
};