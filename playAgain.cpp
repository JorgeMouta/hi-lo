#include <iostream>
#include <limits>
#include <ios>


bool playAgain(){
    std::cout << "Would you like to play again? Y/N" << '\n';
    while(true) {
        char answer;
        std::cin >> answer;
        if (answer == 'Y' || answer == 'y')
            return true;
        else if (answer == 'N' || answer == 'n')
            return false;
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid answer, try again.";
        }
    }
}