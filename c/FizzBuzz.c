#include <stdio.h>
#include <stdlib.h>

char *FizzBuzzRun(int number)
{
    // allocate enough memory to display "any" int as a string
    // 8 digits are enough for now
    char *str = malloc(sizeof(8*sizeof(char)));

    if (0 == number % 3 && 0 == number % 5) {
        sprintf(str, "FizzBuzz");
    }
    else if (0 == number % 3) {
        sprintf(str, "Fizz");
    }
    else if (0 == number % 5) {
        sprintf(str, "Buzz");
    }
    else {
        sprintf(str, "%d", number);
    }

    return str;
}
