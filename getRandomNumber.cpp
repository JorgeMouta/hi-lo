#include <random>
#include <ctime>

int getRandomNumber() {
    std::mt19937 mersenne{static_cast<std::mt19937::result_type>(time(nullptr))};
    std::uniform_int_distribution<> randomNumber{1, 100};
    return randomNumber(mersenne);
}