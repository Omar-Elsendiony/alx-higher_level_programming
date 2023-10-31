#!/usr/bin/python3
def fizzbuzz():
    for i in range(100):
        if (i % 3 and i % 5):
            print("fizzBuzz", end = " ")
        elif (i % 3):
            print("Fizz", end = " ")
        elif (i % 5):
            print("Buzz", end = " ")
        else:
            print(number + " ")
