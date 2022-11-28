// Copyright(c) 2022 Emmanuel fofeyin All rights reserved.
//
// Created by : Emmanuel Fofeyin
// Created on : November 2022
// This program uses user defined functions

#include <iostream>
#include <string>

void CelsiusToFahrenheit() {
    float celsiusTemp;
    float fahrenheitTemp;
    std::string celsiusString;

    // Input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusString;

    // Process and Output
    try {
        celsiusTemp = std::stof(celsiusString);
        fahrenheitTemp = 9 / 5 * celsiusTemp + 32;
        std::cout << "" << std::endl;
        std::cout << celsiusTemp << "°C is equal to " << fahrenheitTemp << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }
}
int main() {
    CelsiusToFahrenheit();

    std::cout << "\nDone." << std::endl;
}
