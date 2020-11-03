#include <iostream>

using std::cout;

bool guessChecker(int randomNumber, int guess) {
    if (guess > randomNumber) {
        cout << "Too high, try again!" << '\n';
        return false;
    } else if (guess < randomNumber) {
        cout << "Too low, try again!" << '\n';
        return false;
    } else {
        cout << "You Win! " << "The random number was: " << randomNumber << '\n';
        return true;
    }
}