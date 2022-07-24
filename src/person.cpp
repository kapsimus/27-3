#include <iostream>
#include "person.h"

Person::Person(std::string position) {
    std::string newName;
    std::cout << "Enter " << position << " name: ";
    std::getline(std::cin, newName);
    while (newName.empty()) {
        std::cout << "Wrong name. Enter " << position << " name: ";
        std::getline(std::cin, newName);
    }
    name = newName;
}
Person::Person() {
    std::string newName;
    std::cout << "Enter person name: ";
    std::getline(std::cin, newName);
    while (newName.empty()) {
        std::cout << "Wrong name. Enter person name: ";
        std::getline(std::cin, newName);
    }
    name = newName;
}

void Person::setName(std::string& newName) {
    name = newName;
}
std::string& Person::getName() {
    return name;
}
