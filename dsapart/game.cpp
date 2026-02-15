#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    srand(time(0));              
    int number = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "🎯 Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100.\n" << endl;

    while (guess != number) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "\n✅ Congratulations! You guessed the number in "
                 << attempts << " attempts.\n";
    }

    cout << "\nThanks for playing! 🎉" << endl;
    return 0;
}
