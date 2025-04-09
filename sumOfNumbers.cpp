// Copyright 2025
// Created by: Xiaohan
// Created on: Apr 3, 2025
// This program adds all whole numbers from 0 up to the
// number entered by the user.

#include <iostream>
#include <string>

int main() {
    // Declare variables
    std::string userInput;
    int number;
    int total = 0;
    int counter = 0;
    // Ask the user for a number
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;

    try {
        // Convert the input to an integer
        number = std::stoi(userInput);
        // Check if it's positive
        if (number < 0) {
            std::cout << "Please enter a positive number." << std::endl;
        } else {
            // While loop to add numbers
            while (counter <= number) {
                total = total + counter;
                counter = counter + 1;
            }

            // Display the result
            std::cout << "The sum of all whole numbers from 0 to " << number
                      << " is " << total << "." << std::endl;
        }
    } catch (std::invalid_argument const &e) {
        // If input is not valid
        std::cout << "Invalid input. Please enter integer." << std::endl;
    }
}
