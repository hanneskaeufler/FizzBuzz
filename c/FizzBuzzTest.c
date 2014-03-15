#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "FizzBuzz.h"

int main(int argc, char *argv[])
{
    int inputs[] = {
        1, 2, 3, 4, 5,
        6, 10, 14, 15, 29,
        30, 31, 33
    };

    const char *expectations[] = {
        "1", "2", "Fizz", "4", "Buzz",
        "Fizz", "Buzz", "14", "FizzBuzz", "29",
        "FizzBuzz", "31", "Fizz"
    };

    int numberOfTestCases = sizeof(inputs) / sizeof(int);
    char *result;

    for (int i = 0; i < numberOfTestCases; i++) {
        result = FizzBuzzRun(inputs[i]);

        // comparing 5 characters is enough to get to FizzB
        if (0 == strncmp(result, expectations[i], 5)) {
            printf(".");
        }
        else {
            printf("\nTest failed: %s does not equal %s\n", result, expectations[i]);

            return 1;
        }

        free(result);
    }

    printf("\nTests complete. No failures\n");

    return 0;
}
