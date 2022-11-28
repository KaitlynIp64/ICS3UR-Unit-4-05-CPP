// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program calculates the sum of all positive numbers inputted

#include <iostream>
#include <string>

int main() {
    // this function adds numbers
    std::string stringLoops;
    std::string stringUser;
    int intLoops;
    int intUser;
    int loopCounter = 0;
    int answer = 0;

    // input
    std::cout << "Input the amount of integers you want to add: ";
    std::cin >> stringLoops;

    // process and output
    try {
        intLoops = std::stoi(stringLoops);
        while (loopCounter < intLoops) {
            std::cout << "Enter an integer: ";
            std::cin >> stringUser;
            intUser = std::stoi(stringUser);
            if (intUser > 0) {
                answer = answer + intUser;
            } else {
                loopCounter++;
                continue;
            }
            loopCounter++;
        }
        std::cout << "The sum of all positive integers is: " << answer << ".";
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input.";
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
