#include <iostream>

using namespace std;

enum choices
{
    paper = 1,
    scissors = 2,
    stone = 3
};

enum roundUserResult
{
    draw = 0,
    lose = -1,
    win = 1
};

int readRoundsNumber()
{
    int rounds;
    cout << "Enter number of rounds? ";
    cin >> rounds;
    return rounds;
}

void listOfChoices()
{
    cout << "\n[1] Paper\n[2] Scissors\n[3] Stone\n";
}

int readUserChoice()
{
    cout << "\nEnter a number of your choice: \n";
    int choice;
    cin >> choice;
    return choice;
}

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

int getComputerChoice()
{
    return randomNumber((choices::paper), ((choices::stone))); // random number between 0 and 4.
}

roundUserResult makeDecision(int userChoice, int computerChoice, int &userCnt, int &computerCnt)
{
    if (userChoice == choices::paper && computerChoice == choices::stone)
    {
        userCnt++;
        return roundUserResult::win;
    }

    if (computerChoice == choices::paper && userChoice == choices::stone)
    {
        computerCnt++;
        return roundUserResult::lose;
    }

    if (userChoice == choices::stone && computerChoice == choices::scissors)
    {
        userCnt++;
        return roundUserResult::win;
    }

    if (computerChoice == choices::stone && userChoice == choices::scissors)
    {
        computerCnt++;
        return roundUserResult::lose;
    }

    if (userChoice == choices::scissors && computerChoice == choices::paper)
    {
        userCnt++;
        return roundUserResult::win;
    }

    if (computerChoice == choices::scissors && userChoice == choices::paper)
    {
        computerCnt++;
        return roundUserResult::lose;
    }

    computerCnt++;
    userCnt++;
    return roundUserResult::draw;
}

void printRoundStatus(roundUserResult result)
{
    cout << "-----------------------------\n";
    if (result == roundUserResult::win)
    {
        cout << "\x1b[42m"; // set background color to green
        cout << "You're winner!";
    }
    else if (result == roundUserResult::lose)
    {
        cout << "\x1b[41m"; // set background color to red
        cout << "\a";       // set bill ring
        cout << "You're loser!";
    }
    else
    {
        cout << "\x1b[43m"; // set background color to yellow
        cout << "Draw!";
    }
    cout << "\n-----------------------------\n";
}

void finalGameResult(int userCnt, int computerCnt)
{
    cout << "\nUser Count: " << userCnt << "\nComputer Count: " << computerCnt << "\n";
    if (userCnt > computerCnt)
    {
        cout << "\x1b[42m";
        cout << "You're winner of the game!";
    }
    else if (userCnt < computerCnt)
    {
        cout << "\x1b[41m";
        cout << "You're loser of the game!";
    }
    else
    {
        cout << "\x1b[43m";
        cout << "It's a draw!\n";
    }
    cout << "\n";
}

bool askToContinue()
{
    cout << "\x1b[0m"; // 44m sets the background color to blue

    cout << "\nDo you want to continue playing? (Y/N)?\n";
    char letter;
    cin >> letter;
    if (letter == 'y' || letter == 'Y')
    {
        return true;
    }
    return false;
}

void startGame()
{

    do
    {
        int rounds = readRoundsNumber(), userCnt = 0, computerCnt = 0;

        for (int i = 0; i < rounds; i++)
        {
            cout << "\nRound[" << i + 1 << "]\n";

            listOfChoices();

            int userChoice = readUserChoice(), computerChoice = getComputerChoice();
            auto roundResult = makeDecision(userChoice, computerChoice, userCnt, computerCnt);

            // cout << "\nComputer is " << computerChoice << "\n";
            printRoundStatus(roundResult);
        }

        finalGameResult(userCnt, computerCnt);

    } while (askToContinue());

    cout << "\nThe game ended!\n";
}

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));

    startGame();

    system("pause>0");
    return 0;
}