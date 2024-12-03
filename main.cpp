#include<iostream>
using namespace std;
int main() {
	int room = 1;
	string input;

	while (input != "quit") {
		switch (room) {
		case 1: //entrance
			cout << "you are walking through the entrence, you can go west, north and east" << endl;
			cin >> input;
			if (input == "west")
				room = 3;
			else if (input == "north")
				room = 6;
			else if (input == "east")
				room = 2;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case 2://Food court
			cout << "you are in the food court, you can go north and west" << endl;
			cin >> input;
			if (input == "north")
				room = 6;
			else if (input == "west")
				room = 1;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case 3: //Carts
			cout << "you are in the checkout, you can go west, north, east" endl;
			cin >> input;
			if (input == "west")
				room = 4;
			else if (input == "north")
				room = 8;
			else if (input == "east")
				room = 1;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case 4://Checkout
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case 5://aisle 1
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		case 6://aisle 7
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		case 7://aisle 2
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		case 8://aisle 9
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		case 9://aisle 11
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		case 10://Checkout
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		}
	}
}
