#pragma once
#include <iostream>

class Person{
    std::string name = "none";
public:
    Person(std::string position);
    Person();
    void setName(std::string& newName);
    std::string& getName();
};