/*
Developer: Jayden Veloz
File Name: Ch5Ex12.cpp
Date: 10 / 23 / 26

Requirements:
Write a program that generates a random number between 1 and 100 and asks the user to guess what the
number is. If the user’s guess is higher than the random number, the program should display “Too high.
Try again.” If the user’s guess is lower than the random number, the program should display “Too low.
Try again.” The program should use a loop that repeats until the user correctly guesses the random
number. Then the program should display “Congratulations. You figured out my number.”
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    const int min = 1;
    const int max = 6;

    int randomNum, guess;

    srand(time(0));

    randomNum = (rand() % 100) + 1;

    cout << "I am thinking of a number between 1 and 100. What number do you think it is? ";
    cin >> guess;

    while (guess != randomNum) {
        if (guess < 1 || guess > 100) {
            cout << "Invalid number. Please enter a number within the range. ";
        } else if (guess > randomNum) {
            cout << "Nope, too high. Try again. ";
        } else if (guess < randomNum) {
            cout << "Nope, too low. Try again. ";
        }
        cin >> guess;
    }

    cout << "\nCongratulations, you figured out my number! \nThe number was " << randomNum << endl;

    return 0;
}