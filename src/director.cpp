#include <iostream>
#include "director.h"

void Director::getCommand(int newCommand) {
    std::cout << "Enter command (number): ";
    std::cin >> command;
}

Director::Director():Person() {
    int managersCount;
    std::cout << "Enter managers count: ";
    std::cin >> managersCount;
    std::cin.ignore();
    for (int i = 0; i < managersCount; i++) {
        managersList.push_back(new Manager());
    }
}
Director::~Director() {
    for (int i = 0; i < managersList.size(); i++)
        delete managersList[i];
}

int Director::sendCommand() {
    return command;
}