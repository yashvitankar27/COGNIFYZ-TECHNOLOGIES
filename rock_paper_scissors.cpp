#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char getUserChoice() {
    char choice;
    cout << "Choose rock (r), paper (p), or scissors (s): ";
    cin >> choice;
    return tolower(choice);
}

char getComputerChoice() {
    srand(time(NULL)); 
    int choice = rand() % 3; 
    switch (choice) {
        case 0:
            return 'r';
        case 1:
            return 'p';
        case 2:
            return 's';
        default:
            return 'r';
    }
}

char determineWinner(char user, char computer) {
    if (user == computer) {
        return 't'; // Tie
    } else if ((user == 'r' && computer == 's') ||
               (user == 'p' && computer == 'r') ||
               (user == 's' && computer == 'p')) {
        return 'u'; 
    } else {
        return 'c'; 
    }
}

void displayResult(char user, char computer, char winner) {
    cout << "You chose: " << user << endl;
    cout << "Computer chose: " << computer << endl;
    if (winner == 'u') {
        cout << "You win!" << endl;
    } else if (winner == 'c') {
        cout << "Computer wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
}

int main() {
    char userChoice, computerChoice, winner;

    userChoice = getUserChoice();
    computerChoice = getComputerChoice();
    winner = determineWinner(userChoice, computerChoice);
    displayResult(userChoice, computerChoice, winner);

    return 0;
}