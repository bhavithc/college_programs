#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>

using namespace std;

int getRandomNr(int lowerLimit, int upperLimit)
{
    srand(static_cast<unsigned int>(time(0)));  // Seed for random number generation
    int secretNr = rand() % (upperLimit - lowerLimit + 1) + lowerLimit;
    return secretNr;
}

int main()
{
    int secretNr = getRandomNr(1, 10);
    int guessNr = 0;
    int attempts = 0;
    cout << "Guess a number between 1 and 10\n";
    cin >> guessNr;
    while (true) {
        if (guessNr == secretNr) {
            cout << "Congratulation you guessed the number in " << attempts << " attempts\n";
            break;
        } else if (guessNr < secretNr) {
            cout << "Too low! try again\n";
            cin >> guessNr ;
        } else {
            cout << "Too high! try again\n";
            cin >> guessNr;
        }
    }

    return 0;
}

// To compile
// g++ nr_guessing_game.cpp