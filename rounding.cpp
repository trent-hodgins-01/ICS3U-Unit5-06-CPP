// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/19/2021
// This is the Canada Post program
// This program lets the user to input a numbers and rounds it

#include <iostream>
#include <iomanip>
#include <cmath>


float RoundDecimals(float userNumber, float userPlaces) {
    // This function rounds the inputted number

    // Variables
    float userNumberRound;

    // Process
    userNumberRound = userNumber*pow(10, userPlaces);
    userNumberRound = userNumberRound + 0.5;
    userNumberRound = static_cast<int>(userNumberRound);
    userNumberRound = userNumberRound/pow(10, userPlaces);

    return userNumberRound;
}

int main() {
    // calling functions and inputs

    std::string userNumber;
    std::string userPlaces;
    float userAnswer;
    float userNumberInt;
    int userPlacesInt;

    // Process & Output
        std::cout << "Enter the number you want to round: ";
    std::cin >> userNumber;

    std::cout << "Enter the decimal places you want to round by: ";
    std::cin >> userPlaces;

        try {
            userNumberInt = std::stof(userNumber);
            userPlacesInt = std::stoi(userPlaces);
            if (userNumberInt == std::stof(userNumber) && \
                userPlacesInt == std::stoi(userPlaces)) {
                    userAnswer = RoundDecimals(userNumberInt, userPlacesInt);
                    std::cout << "" << std::endl;
                    std::cout << "The decimal rounded: " \
                    << userAnswer << std::endl;
                    std::cout << "\nDone." << std::endl;
                } else {
                    std::cout << "These are invalid numbers." << std::endl;
                    std::cout << "\nDone." << std::endl;
                }
        } catch (std::invalid_argument) {
            std::cout << "\nInvalid input." << std::endl;
            std::cout << "\nDone." << std::endl;
            std::cout << "" << std::endl;
        }
}
