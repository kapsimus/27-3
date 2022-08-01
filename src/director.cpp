#include <iostream>
#include "director.h"

void Director::getCommand() {
    std::cout << "Enter command (number): ";
    std::cin >> command;
    std::cout << "Command: " << command << std::endl;
}

Director::Director():Person() {
    int managersCount;
    std::cout << "Enter managers count: ";
    std::cin >> managersCount;
    while (managersCount < 1) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Incorrect count. Enter managers count: " << std::endl;
        std::cin >> managersCount;
    }
    std::cin.ignore();
    for (int i = 0; i < managersCount; i++) {
        managersList.push_back(new Manager());
    }
}

Director::Director(std::string position):Person(position) {
    int managersCount;
    std::cout << "Enter managers count: ";
    std::cin >> managersCount;
    while (managersCount < 1) {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Incorrect count. Enter managers count: " << std::endl;
        std::cin >> managersCount;
    }
    std::string newPosition = "manager";
    std::cin.ignore();
    for (int i = 0; i < managersCount; i++) {
        managersList.push_back(new Manager(newPosition + std::to_string(i)));
    }
}

Director::~Director() {
    for (int i = 0; i < managersList.size(); i++)
        delete managersList[i];
}

void Director::sendCommand() {
    if (!managersList.empty()) {
        for (int i = 0; i < managersList.size(); i++) {
            managersList[i]->setCommand(command, i);
        }
    }
}

int Director::getFreeEmployees() {
    if (!managersList.empty()) {
        int freeEmployeesCount = 0;
        for (Manager* m: managersList) {
            freeEmployeesCount += m->getFreeEmployees();
        }
        return freeEmployeesCount;
    } else return 0;
}