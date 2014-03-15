#include <iostream>
#include <sstream>
#include "FizzBuzz.h"

std::string FizzBuzz::turn(int number)
{
    if (0 == number % 3 && 0 == number % 5) { return std::string("FizzBuzz"); }
    if (0 == number % 3) { return std::string("Fizz"); }
    if (0 == number % 5) { return std::string("Buzz"); }

    std::ostringstream oss;
    oss << number;
    return oss.str();
}
