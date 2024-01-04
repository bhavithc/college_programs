import random

quessed_nr = int(input("Guess a number between 1 and 10: "))
secret_nr = random.randint(1, 10)
attempts = 1

while True:
    if quessed_nr == secret_nr:
        print("Congratulation you guessed the number in", attempts, "attempts")
        break
    elif quessed_nr < secret_nr:
        attempts += 1
        print("Too low! Try again")
    else:
        attempts += 1
        print("Too high! Try again")
    quessed_nr = int(input(""))
