<?php

class FizzBuzz
{
    public static function turn($number)
    {
        if (0 === $number % 3 && 0 === $number % 5) { return "FizzBuzz"; }
        if (0 === $number % 5) { return "Buzz"; }
        if (0 === $number % 3) { return "Fizz"; }

        return $number;
    }
}
