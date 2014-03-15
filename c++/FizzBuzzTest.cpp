#include <iostream>
#include <vector>
#include "FizzBuzz.h"

using namespace std;

typedef pair<int, string> Expectation;

int main()
{
    vector<Expectation> expectations;
    expectations.push_back(make_pair(1, "1"));
    expectations.push_back(make_pair(2, "2"));
    expectations.push_back(make_pair(3, "Fizz"));
    expectations.push_back(make_pair(4, "4"));
    expectations.push_back(make_pair(5, "Buzz"));
    expectations.push_back(make_pair(6, "Fizz"));
    expectations.push_back(make_pair(10, "Buzz"));
    expectations.push_back(make_pair(14, "14"));
    expectations.push_back(make_pair(15, "FizzBuzz"));
    expectations.push_back(make_pair(29, "29"));
    expectations.push_back(make_pair(30, "FizzBuzz"));
    expectations.push_back(make_pair(31, "31"));
    expectations.push_back(make_pair(33, "Fizz"));

    string result;

    for (vector<Expectation>::iterator expectation = expectations.begin();
            expectation != expectations.end();
            ++expectation
    ) {
        result = FizzBuzz::turn(expectation->first);

        if (0 == result.compare(expectation->second)) {
            cout << ".";
        }
        else {
            cout << endl << "Failure: " << result << " does not equal " << expectation->second << endl;

            return 1;
        }
    }

    cout << endl << "Tests complete. No failures" << endl;

    return 0;
}
