cmake_minimum_required(VERSION 3.17)
project(hi_lo)

set(CMAKE_CXX_STANDARD 14)

add_executable(hi_lo main.cpp getRandomNumber.cpp getGuess.cpp getGuess.h guessChecker.cpp guessChecker.h getRandomNumber.h gameEngine.h gameEngine.cpp playAgain.cpp playAgain.h)