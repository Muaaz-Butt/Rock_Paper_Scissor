#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;


int randomNumGenerator() {
	int randomNum;
	srand(time(0));
	randomNum = 1 + (rand() % 3);
	return randomNum;
}

void rockPaperScissor(string choice) {
	int rand = randomNumGenerator();
	string computerChoice;
	if (rand == 1) {
		computerChoice = "rock";
	}
	else if (rand == 2) {
		computerChoice = "paper";
	}
	else if (rand == 3) {
		computerChoice = "scissor";
	}
	if (computerChoice == choice) {
		cout << computerChoice << endl;
		cout << "Game is tied" << endl;
	}
	else if (computerChoice == "rock" && choice == "scissor") {
		cout << computerChoice << endl;
		cout << "Computer won" << endl;
	}
	else if (computerChoice == "paper" && choice == "rock")
	{
		cout << computerChoice << endl;
		cout << "Computer won" << endl;
	}
	else if (computerChoice == "scissor" && choice == "paper")
	{

		cout << computerChoice << endl;
		cout << "Computer won" << endl;
	}
	else {
		cout << computerChoice << endl;
		cout << "You won!";
	}
}

	int main() {
		string choice;
		char choose;
		do {
			cout << "Choose rock, paper, or scissor:  ";
			getline(cin, choice);
			while (choice != "rock" && choice != "paper" && choice != "scissor") {
				cout << "Invalid choice" << endl << "Enter again : ";
				getline(cin, choice);
			}
			
			rockPaperScissor(choice);
			cout << "\nPlay again? (y/n): ";
			cin >> choose;
			cin.ignore(); 
			
		}
		while (choose == 'y');

}
