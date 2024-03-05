#include "SlotMachine.h"
#include "Reel.h"
#include <iostream>
#include <ctime>
using namespace std;


string SlotMachine::playGame()
{
    Reel reel1;
    Reel reel2;
    Reel reel3;

    char playAgain;
    int spins = 0;

    do {
        do {
            cout << "Spin " << ++spins << ":" << endl;
            string result1 = reel1.spin();
            string result2 = reel2.spin();
            string result3 = reel3.spin();

            cout << "Reel 1: " << result1 << endl;
            cout << "Reel 2: " << result2 << endl;
            cout << "Reel 3: " << result3 << endl;

            if (result1 == result2 && result1 == result3) {
                cout << "Jackpot!" << endl;
                break;
            }

            cout << "No match. Spinning again..." << endl;

        } while (true);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    return "Game over!";

};
