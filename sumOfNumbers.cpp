// Copyright 2025
// Created by: Xiaohan
// Created on: Apr 3, 2025
// This program adds all integers from 0 to the number entered by the user.

#include <iostream>
#include <string>

int main() {
    std::string userInput;
    int number;
    int total = 0;
    int counter = 0;

    // Ask the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;

    // Check if the input contains a decimal point
    // If a decimal is found, print the error message and stop the program
    if (userInput.find('.') != std::string::npos) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    } else {
        try {
            // Convert the input string to an integer
            number = std::stoi(userInput);

            // Check if the number is positive
            if (number < 0) {
                std::cout << "Please enter a positive integer." << std::endl;
            } else {
                // Sum all integers from 0 to the entered number
                while (counter <= number) {
                    total = total + counter;
                    counter = counter + 1;
                }

                // Display the result
                std::cout << "The sum of all integers from 0 to " << number
                          << " is " << total << "." << std::endl;
            }
        } catch (std::invalid_argument const &err) {
            // If input is not a valid integer (like letters or symbols)
            std::cout << "Invalid input. Please enter a positive integer." << std::endl;
        }
    }
}
