#pragma once
#include <iostream>
#include "person.h"

enum Objective {
    One,
    Two,
    Three,
    None
};

class Employee: public Person {
    Objective objective = None;
public:
    void setObjective(Objective newObjective);
    std::string getObjective();
};