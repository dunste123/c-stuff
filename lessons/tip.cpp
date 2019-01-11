//
// Created by dunca on 10/12/2018.
//
#include <iostream>
#include "tip.h"

void TipExample::run() {
    int tip = 0;

    std::cout << "Enter tip amount: ";

    std::cin >> tip;

    std::cout << "You paid $" << tip << "\n";
}
