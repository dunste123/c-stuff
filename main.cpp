#include <iostream>
#include "lessons/tip.h"
#include "lessons/temperature.h"
#include "lessons/bmi.h"

int main() {

    std::string choice;

    std::cout << "Choose an action (tip, temp, bmi): ";
    std::cin >> choice;

    // Note to self: https://stackoverflow.com/a/12248783

    if (choice == "tip") {
        TipExample* tipExample = new TipExample;

        tipExample->run();

        return 0;
    }

    if (choice == "temp") {
        auto temperature = new Temperature();

        temperature->run();

        return 0;
    }

    if (choice == "bmi") {

        BmiExample bmiExample;

        bmiExample.run();

        return 0;
    }

    std::cout << "Invalid item\n";
    return 1;
}