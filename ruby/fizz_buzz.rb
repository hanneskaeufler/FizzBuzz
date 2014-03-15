class FizzBuzz
    def self.turn(number)
        return "FizzBuzz" if number.modulo(3).zero? && number.modulo(5).zero?
        return "Fizz" if number.modulo(3).zero?
        return "Buzz" if number.modulo(5).zero?

        number
    end
end
