#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int num = 0, userAns1 = 0, userAns2 = 0, userAns3 = 0;
    int playerScore1 = 0, playerScore2 = 0, roundNum = 0;
    string playAgain = "Yes";
    string p1name;
    string p2name;

    cout << "Beginning Game" << endl
         << "Name: "; // Fixed typo: changed 'end1' to 'endl'

    cout << "What is player 1's name?" << endl
         << "Name: ";
    cin >> p1name;

    cout << endl
         << "Welcome " << p1name << "! ";

    cout << "What is Player 2's name?" << endl
         << "Name: ";
    cin >> p2name;

    cout << endl
         << "Howdy " << p2name << "! ";

    usleep(20000000);
    cout << "\033[2J\033[1;1H";

    while (playAgain == "Yes" || playAgain == "yes")
    {
        roundNum = roundNum + 1;

        cout << "Beginning Round... " << endl; // Fixed typo: changed 'end1' to 'endl'

        cout << "Round: " << roundNum << endl
             << endl; // Fixed typo: changed '<,' to '<<'

        cout << p1name << ", think of a number 1 through 10." << endl;
        cout << p1name << ", what is the number?" << endl
             << endl;
        cout << "Number: ";
        cin >> num;

        while (num < 1)
        {
            cout << "Please enter a number greater than 1" << endl
                 << endl;
            cout << p1name << ", what is the number?" << endl
                 << endl;
            cout << "Number: ";
            cin >> num;
        }

        while (num > 10)
        {
            cout << "Please enter a number less than 10" << endl
                 << endl;
            cout << p1name << ", what is the number?" << endl
                 << endl;
            cout << "Number: ";
            cin >> num;
        }

        cout << p2name << ", what number is " << p1name << " thinking?" << endl;
        cout << "Number: ";
        cin >> userAns1;

        if (userAns1 == num)
        {
            cout << endl
                 << "Are you a mind reader?!";
            playerScore2 = playerScore2 + 5;
        }

        else
        {
            cout << endl
                 << "That is incorrect. Try Again." << endl
                 << endl
                 << "Ready, " << p2name << "?";
            cout << endl
                 << "What number was " << p1name << " thinking?" << endl;
            cout << "Number: ";
            cin >> userAns2;

            if (userAns2 == num)
            {
                cout << "That is the correct answer!" << endl
                     << endl;
                playerScore2 = playerScore2 + 3;
            }
            else
            {
                cout << endl
                     << "Um... not quite. Third time's the charm?" << endl
                     << endl;
                cout << "Ready, " << p2name << "?" << endl
                     << "What number was " << p1name << " thinking?" << endl;
                cout << "Number: ";
                cin >> userAns3;
            }

            if (userAns3 == num)
            {
                cout << endl
                     << "Awesome!";
                playerScore2 = playerScore2 + 1;
            }
            else
            {
                cout << endl
                     << "I'm sorry, " << p2name << "! "
                     << "Three strikes and you're OUT! (Love ya!)" << endl;
                cout << endl
                     << "Let's give " << p1name << " a chance to earn their points!" << endl;
            }

            cout << endl
                 << "Now it's " << p2name << "'s turn to choose a number." << endl
                 << endl
                 << endl;

            cout << p2name << ", think of a number 1 through 10." << endl;
            cout << "Number: ";
            cin >> num;

            while (num < 1)
            {
                cout << "Please enter a number greater than or equal to 1" << endl;
                cout << p2name << ", what is the number?" << endl;
                cout << "Number: ";
                cin >> num;
            }

            while (num > 10)
            {
                cout << "Please enter a number less than or equal to 10" << endl;
                cout << p2name << ", what is the number?" << endl;
                cout << "Number: ";
                cin >> num;
            }

            cout << p1name << ", what number is " << p2name << " thinking?" << endl;
            cout << "Number: ";
            cin >> userAns1;

            if (userAns1 == num)
            {
                cout << endl
                     << "Are you a mind reader?! ";
                playerScore1 = playerScore1 + 5;
            }
            else
            {
                cout << endl
                     << "That is incorrect. Try again." << endl
                     << endl
                     << "Ready, " << p1name << "?";
                cout << endl
                     << "What number was " << p2name << " thinking?" << endl;
                cout << "Number: ";
                cin >> userAns2;
            }

            if (userAns2 == num)
            {
                cout << "That is the correct answer!" << endl
                     << endl;
                playerScore2 = playerScore2 + 3;
            }
            else
            {
                cout << "Um.. not quite. Third time's the charm?" << endl
                     << endl
                     << "Ready, " << p1name << "?";
                cout << endl
                     << "What number was " << p2name << " thinking?" << endl;
                cout << "Number: ";
                cin >> userAns3;
            }

            if (userAns3 == num)
            {
                cout << endl
                     << "Awesome!";
                playerScore1 = playerScore1 + 1;
            }

            cout << endl
                 << endl
                 << "Want to continue? (Yes or No)" << endl;
            cin >> playAgain;

            cout << endl
                 << endl
                 << "You chose to end the game." << endl
                 << endl
                 << "You played " << roundNum << " round(s).";

            cout << endl
                 << endl
                 << p2name << "'s final score is: " << playerScore1 << endl
                 << endl;
            cout << p1name << "'s final score is: " << playerScore2 << endl
                 << endl;

            cout << endl
                 << "Goodbye :o" << endl
                 << endl
                 << endl;

            cout << "E N D";
