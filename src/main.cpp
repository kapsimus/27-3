#include <iostream>
#include "director.h"

int main() {
    Director* newDirector = new Director("director");
    while (newDirector->getFreeEmployees() > 0) {
        newDirector->getCommand();
        newDirector->sendCommand();

    }

    return 0;
}
