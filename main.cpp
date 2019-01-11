#include <iostream>
#include "lessons/tip.h"
#include "lessons/temperature.h"
#include "lessons/bmi.h"

int main() {

    std::string choice;

    std::cout << "Choose an action (tip, temp, bmi): ";
    std::cin >> choice;

    if (choice == "tip") {
        TipExample tipExample;

        tipExample.run();

        return 0;
    }

    if (choice == "temp") {
        Temperature temperature;

        temperature.run();

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