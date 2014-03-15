#!/bin/bash

fizz_buzz_turn() {
    number=$1

    if [ 0 -eq $(($number % 3)) ] && [ 0 -eq $(($number % 5)) ]
    then
        printf "FizzBuzz"
    elif [ 0 -eq $(($number % 3)) ]
    then
        printf "Fizz"
    elif [ 0 -eq $(($number % 5)) ]
    then
        printf "Buzz"
    else
        printf "$number"
    fi
}
