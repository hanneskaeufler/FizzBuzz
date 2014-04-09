from math import *

class FizzBuzz(object):
    @staticmethod
    def turn(number):
        if number % 15 == 0:
            return 'FizzBuzz'
        if number % 3 == 0:
            return 'Fizz'
        if number % 5 == 0:
            return 'Buzz'

        return number
