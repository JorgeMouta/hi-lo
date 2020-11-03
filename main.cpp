#include <iostream>
#include "getGuess.h"
#include "guessChecker.h"
#include "getRandomNumber.h"


int main() {
    int randomNumber = getRandomNumber();
    for(int count{0}; count < 7; count++) {
        std::cout << "Attempts left: " << 7 - count << '\n';
        int guess = getGuess();
        if (guessChecker(randomNumber, guess)) {
            return 0;
        }
    }
    std::cout << "You lost bud, right number was: " << randomNumber;
    return 0;
}
