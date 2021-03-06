#!/bin/bash

source "fizz_buzz.sh"

test_run() {
    results[1]=1
    results[2]=2
    results[3]="Fizz"
    results[4]=4
    results[5]="Buzz"
    results[6]="Fizz"
    results[10]="Buzz"
    results[14]=14
    results[15]="FizzBuzz"
    results[29]=29
    results[30]="FizzBuzz"
    results[31]=31
    results[33]="Fizz"

    for number in 1 2 3 4 5 6 10 14 15 29 30 31 33
    do
        result=$(fizz_buzz_turn $number)
        expectation=${results[number]}

        if [ "$result" != $expectation ]
        then
            printf "Test failed: Expected %s to equal %s\n" "$result" "$expectation"
            exit 1
        fi

        printf "."
    done

    printf "\nTests completed. No failures\n"
}

test_run
