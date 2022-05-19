/******************************************************************************
# Author:           Corey Lee
# Assignment:       Rock, paper, scissor program!
# Date:             May 15, 2022
# Description:      This program will determine the winner of three contestants. 
#					It focuses on who collects the most rocks, and if there are
#					ties, the program will output who is tied. 
#
# Input:            int placement1, placement2, placement3
#					string player1, player2, player3
#
# Output:           which player came in first place, second place, third place.
#					The average rocks collected from the three players. 
#******************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int placement1 = 0;
	int placement2 = 0;
	int placement3 = 0;
	string player1 = " ";
	string player2 = " ";
	string player3 = " ";
	double total = 0.0;
	const int NUM_PLAYERS = 3;

	cout << "Welcome to the Rock Collector Championships! \n" << endl;
	cout << "Enter player 1 name: " << endl;
	getline(cin, player1);
	cin.clear();
	cout << "How many rocks did " << player1 << " collect?" << endl;
	cin >> placement1;
	cin.ignore(100, '\n');
	if (placement1 < 0) {
		placement1 = 0;
		cout << "Invalid amount. 0 will be entered." << endl;
		cout << placement1 << endl;
	}


	cout << "Enter player 2 name: " << endl;
	getline(cin, player2);
	cin.clear();
	cout << "How many rocks did " << player2 << " collect?" << endl;
	cin >> placement2;
	cin.ignore(100, '\n');
	if (placement2 < 0) {
		placement2 = 0;
		cout << "Invalid amount. 0 will be entered." << endl;
		cout << placement2 << endl;
	}


	cout << "Enter player 3 name: " << endl;
	getline(cin, player3);
	cin.clear();
	cout << "How many rocks did " << player3 << " collect?" << endl;
	cin >> placement3;
	cin.ignore(100, '\n');
	if (placement3 < 0) {
		placement3 = 0;
		cout << "Invalid amount. 0 will be entered." << endl;
		cout << placement3 << endl;
	}


	if (placement1 == placement2 && placement1 == placement3) {
		cout << "It's a three-way tie!" << endl;
	}
	else if (placement1 == placement2 || placement2 == placement1) {
		cout << player1 << " and " << player2 << " are tied for first place!" << endl;
		cout << player3 << " is in second place!" << endl;
	}
	else if (placement1 == placement3 || placement3 == placement1) {
		cout << player1 << " and " << player3 << " are tied for first place!" << endl;
		cout << player2 << " is in second place!" << endl;
	}
	else if (placement2 == placement3 || placement3 == placement2) {
		cout << player2 << " and " << player3 << " are tied for first place!" << endl;
		cout << player1 << " is in second place" << endl;
	}
	else {
		if (placement1 > placement2 && placement1 > placement3) {
			cout << player1 << " is in first place!" << endl;
			if (placement2 > placement3) {
				cout << player2 << " is in second place!" << endl;
				cout << player3 << " is in third place!" << endl;
			}
			else if (placement3 > placement2) {
				cout << player3 << " is in second place!" << endl;
				cout << player2 << " is in third place!" << endl;
			}
		}
		else if (placement2 > placement1 && placement2 > placement3) {
			cout << player2 << " is in first place!" << endl;
			if (placement1 > placement3) {
				cout << player1 << " is in second place!" << endl;
				cout << player3 << " is in third place!" << endl;
			}
			else if (placement3 > placement1) {
				cout << player3 << " is in second place!" << endl;
				cout << player1 << " is in third place!" << endl;
			}
		}
		else if (placement3 > placement1 && placement3 > placement2) {
			cout << player3 << " is in first place!" << endl;
			if (placement2 > placement1) {
				cout << player2 << " is in second place!" << endl;
				cout << player1 << " is in third place!" << endl;
			}
			else if (placement1 > placement2) {
				cout << player1 << " is in second place!" << endl;
				cout << player2 << " is in third place!" << endl;
			}
		}
	}

	total = static_cast<double>(placement1 + placement2 + placement3) / NUM_PLAYERS;
	cout << fixed << setprecision(2) << "Average number of rocks collected by top three players were " << total << " rocks! \n" << endl;
	cout << "Congratulations Rock Collectors!" << endl;

	return 0;
}
