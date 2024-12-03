#include<iostream>
using namespace std;
const enum ROOMS{ENTRANCE=7,FOOD_COURT=8, CARTS=9,CHECKOUT=10,PRODUCE =11,PHARMACY=12,BAKERY=13,BACK_ROOMS=14};

int main() {
	int room = 1;
	string input;

	while (input != "quit") {
		switch (room) {
		case 1: //
		
		case FOOD_COURT://Food court
			
		case CARTS: //Carts
			
		case CHECKOUT://Checkout
			cout << "You are in ___, you can go" << endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case 1://aisle 1
			cout << "You are in ___, you can go" << endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		case ENTRANCE://Entrance
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
		case 8://aisle 9
			cout << "you are in the food court, you can go north and west" << endl;
			cin >> input;
			if (input == "north")
				room = 6;
			else if (input == "west")
				room = 1;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case CARTS://carts
			cout << "you are by the carts, you can go west, north, east" << endl;
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
		case CHECKOUT://Checkout
			cout << "You are in ___, you can go" endl;
			cin >> input;
			else
				cout << "sorry, thats not an option" << endl;
				break;
		}
	}
}
