#include <iostream>
#include <vector>
#include "FizzBuzz.h"

typedef std::pair<int, std::string> Expectation;

int main()
{
    std::vector<Expectation> expectations;
    expectations.push_back(std::make_pair(1, "1"));
    expectations.push_back(std::make_pair(2, "2"));
    expectations.push_back(std::make_pair(3, "Fizz"));
    expectations.push_back(std::make_pair(4, "4"));
    expectations.push_back(std::make_pair(5, "Buzz"));
    expectations.push_back(std::make_pair(6, "Fizz"));
    expectations.push_back(std::make_pair(10, "Buzz"));
    expectations.push_back(std::make_pair(14, "14"));
    expectations.push_back(std::make_pair(15, "FizzBuzz"));
    expectations.push_back(std::make_pair(29, "29"));
    expectations.push_back(std::make_pair(30, "FizzBuzz"));
    expectations.push_back(std::make_pair(31, "31"));
    expectations.push_back(std::make_pair(33, "Fizz"));

    std::string result;

    for (std::vector<Expectation>::iterator expectation = expectations.begin();
            expectation != expectations.end();
            ++expectation
    ) {
        result = FizzBuzz::turn(expectation->first);

        if (0 == result.compare(expectation->second)) {
            std::cout << ".";
        }
        else {
            std::cout << std::endl;
            std::cout << "Failure: ";
            std::cout << result;
            std::cout << " does not equal ";
            std::cout << expectation->second;
            std::cout << std::endl;

            return 1;
        }
    }

    std::cout << std::endl << "Tests complete. No failures" << std::endl;

    return 0;
}

bool assertEquals()
{
    return false;
}
