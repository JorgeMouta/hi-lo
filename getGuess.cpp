#include <iostream>
#include <limits>
#include <ios>

int getGuess() {
    std::cout << "Please enter your guess, should be a number"
                 " in the range of 1-100." << '\n';
    int guess;
    while (true) {
        std::cin >> guess;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid number, try again." << '\n';
            continue;
        } else if (guess < 1 || guess > 100) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid number, try again." << '\n';
            continue;
        } else return guess;
    }
}