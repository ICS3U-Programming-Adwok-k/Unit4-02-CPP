// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: April 29th, 2025
// This program calculates the factorial starting from 1
// to the user's input and displays them.

#include <iostream>
#include <string>

int main() {
    int counter = 0;
    int factorial = 1;
    int user_num;
    std::string user_number;

    std::cout << "Enter a whole number: ";
    std::cin >> user_number;

    try {
        user_num = stoi(user_number);

        if (user_num < 0) {
            std::cout << "Please enter a positive number." << std::endl;
            // if the condition is true the program stops
            return 0;
        }

        do {
            // we shall increment by 1 each time
            counter = counter + 1;
            // To get the factorial we have to multiply
            // the factorial with the counter
            factorial = factorial * counter;
            // Display the counter! = factorial(factorial*counter)
            std::cout << counter << "! = " << factorial << std::endl;
        } while (counter < user_num);
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number." << std::endl;
    }

    std::cout << "Thank you!" << std::endl;
}
