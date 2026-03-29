#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 15;
    int guess;

    cout << "Enter your guess: ";
    cin >> guess;

    while (guess != secretNumber)
    {
        if (guess > secretNumber)
        {
            cout << "Too high\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low\n";
        }

        cout << "Try again: ";
        cin >> guess;
    }

    cout << "Correct" << endl;

    return 0;
}