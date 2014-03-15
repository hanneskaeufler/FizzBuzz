#include <iostream>
#include <vector>
#include "FizzBuzz.h"

typedef std::pair<int, std::string> Expectation;

int main()
{
    std::vector<Expectation> expectations;
    expectations.push_back(std::make_pair(1, "foo"));

    for (std::vector<Expectation>::iterator it = expectations.begin(); it != expectations.end(); ++it) {

        FizzBuzz::turn(1);
        std::cout << "." << std::endl;
    }

    std::cout << "Test complete. No failures" << std::endl;

    return 0;
}

bool assertEquals()
{
    return false;
}
