<?php

require_once("FizzBuzz.php");

class FizzBuzzTest extends \PHPUnit_Framework_TestCase
{
    /**
     * @dataProvider testCases
     */
    public function testTurn($number, $result)
    {
        $this->assertEquals($result, FizzBuzz::turn($number));
    }

    public function testCases()
    {
        return [
            [1, 1],
            [2, 2],
            [3, 'Fizz'],
            [4, 4],
            [5, 'Buzz'],
            [6, 'Fizz'],
            [10, 'Buzz'],
            [14, 14],
            [15, 'FizzBuzz'],
            [29, 29],
            [30, 'FizzBuzz'],
            [31, 31],
            [33, 'Fizz'],
        ];
    }
}
