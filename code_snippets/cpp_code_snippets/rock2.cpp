//
// Rock Paper Scissors
//
#include <iostream>
using namespace std;


int main() {
	int ch1, ch2;
	int winner = 0;		// 0 means nobody won

	cout << "Rock == 0, Paper == 1, Scissors == 2" << endl;
	cout << "Player 1, Enter your choice :";
	cin >> ch1;

	if (ch1 < 0 || ch1 > 2) {
		cout << "Player 1, you entered an illegal choice, you lose!" << endl;
		return -1;
	}

	cout << "Player 2, it's your turn ";
	cin >> ch2;

	if (ch2 < 0 || ch2 > 2) {
		cout << "Player 2, you entered an illegal choice, you lose!" << endl;
		return -1;
	}

	switch (ch1) {
		case 0:
			cout << "Hit them with a Rock!" << endl;
			switch (ch2) {
			    case 0:
				    break;
			    case 1:
				    winner = 2;
				    break;
			    case 2:
				    winner = 1;
				    break;
			}

			break;
		case 1:
			cout << "Wrap them with Paper!" << endl;
			switch (ch2) {
			    case 0:
				    winner = 1;
				    break;
			    case 1:
				    break;
			    case 2:
				    winner = 2;
				    break;
			}
			break;
		case 2:
			cout << "Cut them with Scissors!" << endl;
			switch (ch2) {
			    case 0:
				    winner = 2;
				    break;
			    case 1:
				    winner = 1;
				    break;
			    case 2:
				    break;
			}
			break;
		default:
			cout << "Bug in Program" << endl;
	}
	cout << "The winner is Player: " << winner << endl;
}
