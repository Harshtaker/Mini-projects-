#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;


int getValidatedInput() {
    int guess;
    while (!(cin >> guess)) {
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "Invalid input. Please enter a number: ";
    }
    return guess;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int lower, upper, maxAttempts;
    char playAgain;

    cout << "🎮===========================================🎮" << endl;
    cout << "        Welcome to the Number Guessing Game!" << endl;
    cout << "🎮===========================================🎮\n" << endl;

    do {
        cout << "Select Difficulty Level:\n";
        cout << "1. Easy (1-20)\n";
        cout << "2. Medium (1-50)\n";
        cout << "3. Hard (1-100)\n";
        cout << "Enter your choice (1-3): ";

        int difficulty = getValidatedInput();

        switch (difficulty) {
            case 1: lower = 1; upper = 20; maxAttempts = 7; break;
            case 2: lower = 1; upper = 50; maxAttempts = 10; break;
            case 3: lower = 1; upper = 100; maxAttempts = 15; break;
            default: cout << "Invalid choice. Defaulting to Medium.\n";
                     lower = 1; upper = 50; maxAttempts = 10; break;
        }

        int secret = rand() % (upper - lower + 1) + lower;
        int attempts = 0, guess;

        cout << "\nI have chosen a number between " << lower << " and " << upper << ". Can you guess it?" << endl;

        while (true) {
            cout << "Enter your guess: ";
            guess = getValidatedInput();
            attempts++;

            if (guess == secret) {
                cout << "\n🎉 Correct! You guessed the number in " << attempts << " attempts.\n";
                break;
            } else if (guess < secret) {
                cout << "Too low! Try again.\n";
            } else {
                cout << "Too high! Try again.\n";
            }

            if (attempts >= maxAttempts) {
                cout << "\n❌ You've used all your attempts! The number was: " << secret << "\n";
                break;
            }
        }

        cout << "\n🔁 Do you want to play again? (y/n): ";
        cin >> playAgain;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "👋 Thanks for playing! See you next time.\n";
    return 0;
}


