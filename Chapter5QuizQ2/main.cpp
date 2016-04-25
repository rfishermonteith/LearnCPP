#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return static_cast<int>(rand() * fraction * (max - min +1) + min);
}

void playHiLo()
{
    cout << "Let's play a game.  I'm thinking of a number.  You have 7 tries to guess what it is." << endl;
    int numberToGuess = getRandomNumber(1,100);
    int guess;

    for (int k = 1; k<=7; ++k)
    {
        cout << "Guess #" << k << ": ";
        cin >> guess;

        // Check whether the guess is too high or low
        if (guess > numberToGuess)
            cout << "Your guess is too high." << endl;
        else if (guess < numberToGuess)
            cout << "Your guess is too low." << endl;

        // Check whether the game is won or lost
        if(guess == numberToGuess)
        {
            cout << "Corrent! You win!" << endl;
            break;
        }
        else if (k == 7)
            cout << "Sorry, you lose. The correct number was " << numberToGuess << endl;
    }
}

char getInput()
{
    while (1)
    {
        cout << "Would you like to play again (y/n)? ";
        char input;
        cin >> input;
        std::cin.ignore(32767, '\n'); // clear up to 32767 characters until a '\n' is found

        if (input == 'y' || input == 'n')
            return input;
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    do
    {
        playHiLo();
    } while (getInput() == 'y');

    return 0;
}
