#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <cstdlib>
#include <ctime>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl<<endl;
    cout << "Try to guess the number between 1 and 100." << endl<<endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl<<endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl<<endl;
        } else {
            cout << "\n\nCongratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}