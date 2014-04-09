import unittest
from FizzBuzz import FizzBuzz

class FizzBuzzTest(unittest.TestCase):
    def test_turn(self):
        testCases = [
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
        ]

        for testCase in testCases:
            self.assertEquals(testCase[1], FizzBuzz.turn(testCase[0]))


if __name__ == "__main__":
    unittest.main()
