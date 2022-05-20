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
    std::string numberAsString;
    int numberFromUser;
    int randomNumber;
    int loopCounter = 0;

    // input
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);

    // process & output
    while (true) {
        std::cout << "Enter a number between 0-9: ";
        std::cin >> numberAsString;
        try {
            numberFromUser = std::stoi(numberAsString);
            loopCounter = loopCounter + 1;
            if (numberFromUser == randomNumber) {
                std::cout << "You got it in " << loopCounter <<
                " tries" << std::endl;
                break;
            } else if (randomNumber > numberFromUser) {
                std::cout << "Too low!" << std::endl;
            } else if (randomNumber < numberFromUser) {
                std::cout << "Too high!" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Please enter an integer" << std::endl;
        }
    }
    std::cout << "\nDone." << std::endl;
}
