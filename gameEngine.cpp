#include <iostream>
#include "getGuess.h"
#include "guessChecker.h"
#include "getRandomNumber.h"
#include "playAgain.h"


int gameEngine() {
    int randomNumber = getRandomNumber();
    for(int count{0}; count < 7; count++) {
        std::cout << "Attempts left: " << 7 - count << '\n';
        int guess = getGuess();
        if (guessChecker(randomNumber, guess)) {
            return playAgain();

        }
    }
    std::cout << "You lost bud, right number was: " << randomNumber;
    return playAgain();
}
