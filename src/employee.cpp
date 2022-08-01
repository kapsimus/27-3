#include <iostream>
#include "employee.h"

Employee::Employee():Person() {

}

Employee::Employee(std::string position):Person(position) {

}

Objective Employee::getObjective() {
    return objective;
}

std::string Employee::getStrObjective() {
    if (objective == A) return "Task A";
    else if (objective == B) return "Task B";
    else if (objective == C) return "Task C";
    else return "None";
}

void Employee::setObjective(Objective newObjective) {
    objective = newObjective;
}