<?php

class FizzBuzz
{
    const FIZZ = 'Fizz';
    const BUZZ = 'Buzz';
    const FIZZBUZZ = 'FizzBuzz';

    public static function turn($number)
    {
        if (0 === $number % 3 && 0 === $number % 5) { return self::FIZZBUZZ; }
        if (0 === $number % 5) { return self::BUZZ; }
        if (0 === $number % 3) { return self::FIZZ; }

        return $number;
    }
}
