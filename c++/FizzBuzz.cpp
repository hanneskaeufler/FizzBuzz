#include <iostream>
#include <sstream>
#include "FizzBuzz.h"

using namespace std;

string FizzBuzz::turn(int number)
{
    if (0 == number % 3 && 0 == number % 5) { return string("FizzBuzz"); }
    if (0 == number % 3) { return string("Fizz"); }
    if (0 == number % 5) { return string("Buzz"); }

    ostringstream oss;
    oss << number;

    return oss.str();
}
