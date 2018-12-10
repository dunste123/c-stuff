//
// Created by dunca on 10/12/2018.
//
#include <iostream>
#include <cmath>
#include "bmi.h"

void bmi() {
    double height, weight, bmi;

    // Ask user for their height

    std::cout << "Type in your height (m): ";
    std::cin >> height;

    // Now ask the user for their weight and calculate BMI
    std::cout << "Type in your weight (kg): ";
    std::cin >> weight;

    bmi = weight / pow(height, 2);

    std::cout << "Your bmi is: " << bmi << "\n";

}