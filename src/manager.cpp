#include "manager.h"
#include "employee.h"
#include <cmath>

Manager::Manager():Person() {
    int employeesCount;
    std::cout << "Enter employees count: ";
    std::cin >> employeesCount;
    while (employeesCount < 1) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Incorrect count. Enter employees count: ";
        std::cin >> employeesCount;
    }
    std::cin.ignore();
    for (int i = 0; i < employeesCount; i++) {
        employeesList.push_back(new Employee());
    }
}

Manager::Manager(std::string position):Person(position) {
    int employeesCount;
    std::cout << "Enter employees count: ";
    std::cin >> employeesCount;
    while (employeesCount < 1) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Incorrect count. Enter employees count: ";
        std::cin >> employeesCount;
    }
    std::cin.ignore();
    std::string newPosition = "employee";
    for (int i = 0; i < employeesCount; i++) {
        employeesList.push_back(new Employee(newPosition + std::to_string(i)));
    }
}


void Manager::setCommand(int newCommand, int number) {
    command = newCommand;
    std::srand(newCommand + number);
    sendObjectives();
}

int Manager::getFreeEmployees() {
    if (employeesList.empty()) {
        std::cout << "empty" << std::endl;
        return 0;
    } else {
        int result = 0;
        for (Employee* e: employeesList) {
            if (e->getObjective() == None) {
                result++;
            }
        }
        std::cout << "FreeEmployees = " << result << std::endl;
        return result;
    }
}

Objective Manager::generateObjective() {
    int objectiveNumber;
    objectiveNumber = std::rand() % 3;
    if (objectiveNumber == 0) return A;
    else if (objectiveNumber == 1) return B;
    else return C;
}


void Manager::sendObjectives() {
    int freeEmployeesCount = getFreeEmployees();
    if (freeEmployeesCount == 0) {
        return;
    }
    int newObjectivesCount = std::rand() % freeEmployeesCount + 1;
    if (freeEmployeesCount > 0) {
        for (Employee* e: employeesList) {
            if (e->getObjective() == None) {
                e->setObjective(generateObjective());
                std::cout << "Employee " << e->getName() << " performs the task " << e->getStrObjective() << std::endl;
                newObjectivesCount--;
                if (newObjectivesCount == 0) {
                    break;
                }
            }
        }
    }
}


