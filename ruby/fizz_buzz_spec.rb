require "minitest/autorun"
require_relative "fizz_buzz"

describe FizzBuzz do
    it "takes a turn at FizzBuzz" do
        cases = [
            [1, 1],
            [2, 2],
            [3, "Fizz"],
            [4, 4],
            [5, "Buzz"],
            [6, "Fizz"],
            [10, "Buzz"],
            [14, 14],
            [15, "FizzBuzz"],
            [29, 29],
            [30, "FizzBuzz"],
            [31, 31],
            [33, "Fizz"],
        ]

        cases.each do |theCase|
            FizzBuzz.turn(theCase[0]).must_equal(theCase[1])
        end
    end
end
