#include <iostream>
#include "employee.h"

std::string Employee::getObjective() {
    if (objective == One) return "One";
    else if (objective == Two) return "Two";
    else if (objective == Three) return "Three";
    else return "None";
}

void Employee::setObjective(Objective newObjective) {
    objective = newObjective;
}