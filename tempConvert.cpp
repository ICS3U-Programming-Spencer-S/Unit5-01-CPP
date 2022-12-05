// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Dec 4, 2022
// A program which converts celsius to fahrenheit

#include <iomanip>
#include <iostream>

void CalculateFahrenheit() {
    // declaring variables
    float CelsiusInp, FahrenheitOut;
    std::string CelsiusInpStr;

    // Input
    std::cout << "Enter a number to convert (°C): ";
    std::cin >> CelsiusInpStr;

    try {
    // converting from str to float
        CelsiusInp = std::stof(CelsiusInpStr);

    // calculation
        FahrenheitOut = (9.0/5.0) * CelsiusInp + 32;

    // output
        std::cout << std::fixed << std::setprecision(2) << CelsiusInp;
        std::cout << " (°C) is equal to " << std::fixed;
        std::cout << std::setprecision(2) << FahrenheitOut << "(°F)\n";

    // For invalid inputs
    } catch (std::invalid_argument) {
        std::cout << "Enter a number only! \n";
    }
}

int main() {
    // calls the function, has no use here.
    CalculateFahrenheit();
}
