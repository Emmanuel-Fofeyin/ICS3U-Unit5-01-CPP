// Copyright(c) 2022 Emmanuel fofeyin All rights reserved.
//
// Created by : Emmanuel Fofeyin
// Created on : November 2022
// This program uses user defined functions

#include <iostream>
#include <string>

std::string celsiusString;
int celsiusTemp;
int fahrenheitTemp;

void fahrenheit() {
    std::cout << "Enter a temperature (°C): ";
    std::cin >> celsiusTemp;

    std::cout << "\n";
    try {
        celsiusTemp = std::stof(celsiusString);
        fahrenheitTemp = 9.0 / 5.0 * fahrenheitTemp + 32;
        std::cout << celsiusTemp << "°C is equal to "
                  << fahrenheitTemp << "°F.";
    } catch (std::invalid_argument) {
        std::cout << celsiusString << ",is invalid input please try again.";
    }

    std::cout << "\n\n\nDone.\n";
}

int main() {
    fahrenheit();
}
