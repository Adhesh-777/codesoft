#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int secretNumber, guess, attempts;
    char playAgain;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    do {
        secretNumber = rand() % 100 + 1;  // Random number between 1 and 100
        attempts = 0;

        cout << "=== Welcome to the Number Guessing Game! ===\n";
        cout << "I'm thinking of a number between 1 and 100.\n";

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > secretNumber) {
                cout << "Too high! Try again.\n";
            } else if (guess < secretNumber) {
                cout << "Too low! Try again.\n";
            } else {
                cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts.\n";
            }

        } while (guess != secretNumber);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye!\n";

    return 0;
}
