// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Calculates perimeter and area of a rectangle
//     with dimensions inputted from user

#include <iostream>
#include <random>
#include <string>

int main() {
    // this function is a guessing game
    std::string strNumber;
    int intNumber;
    int randomNumber;
    int counter1 = 0;

    // input
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // process & output
    while (true) {
        std::cout << "Enter a number between 0-9: ";
        std::cin >> strNumber;
        try {
            intNumber = std::stoi(strNumber);
            counter1 = counter1 + 1;
            if (intNumber == randomNumber) {
                std::cout << "You got it in " << counter1 <<
                " tries" << std::endl;
                break;
            } else if (randomNumber > intNumber) {
                std::cout << "Too low!" << std::endl;
            } else if (randomNumber < intNumber) {
                std::cout << "Too high!" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Please enter an integer" << std::endl;
        }
    }
    std::cout << "\nDone." << std::endl;
}
