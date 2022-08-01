#pragma once
#include <vector>
#include "person.h"
#include "manager.h"

class Director: public Person {
    int command = 0;
    std::vector<Manager*> managersList;
public:
    Director();
    Director(std::string position);
    ~Director();
    void getCommand();
    void sendCommand();
    int getFreeEmployees();

};