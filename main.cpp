#include<iostream>
using namespace std;
const enum ROOMS { ENTRANCE = 7, FOOD_COURT = 8, CARTS = 9, CHECKOUT = 10, PRODUCE = 11, PHARMACY = 12, BAKERY = 13, BACK_ROOMS = 14 };

int main() {
	int room = 1;
	string input;

	while (input != "quit") {
		switch (room) {
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

		case FOOD_COURT://Food court
			cout << "you are in the food court, you can go north and west" << endl;
			cin >> input;
			if (input == "north")
				room = 6;
			if (input == "west")
				room = ENTRANCE;
			else
				cout << "sorry, thats not an option" << endl;
			break;

		case CARTS: //Carts
			cout << "you are by the carts, you can go west, north, and east" << endl;
			cin >> input;
			if (input == "west")
				room = CHECKOUT;
			if (input == "north")
				room = PRODUCE;
			if (input == "east")
				room = ENTRANCE;
			else
				cout << "sorry, thats not an option" << endl;
			break;

		case CHECKOUT://Checkout
			cout << "You are in the checkout, you can go north and east" << endl;
			cin >> input;
			if (input == "north")
				room = 3;
			if (input == "east")
				room = CARTS;
			else
				cout << "sorry, thats not an option" << endl;
				break;

		case PRODUCE:
			cout << "You are in the produce, you can go west, east, south" << endl;
			cin >> input;
			if (input == "west") {
				cout << "Do you want to go in Aisle 1, 2, or 3?"
					if (input == "1")
						room = 1;

					if (input == "2")
						room = 2;

					if (input == "3")
						room = 3;
			}
				
			if (input == "east") {
				cout << "Do you want to go in Aisle 4, 5, or 6?"
					if (input == "4")
						room = 4;
					if (input == "5")
						room = 5;
					if (input == "6")
						room = 6;
			}
			if (input == "south")
				room = CARTS;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case PHARMACY:
			cout << "You are in the pharmacy, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 1;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case BAKERY:
			cout << "You are in the Backery, you can go south" << endl;
			cin >> input;
			if (input == "south")
				room = 4;
			else
				cout << "sorry, thats not an option" << endl;
			break;
		case BACK_ROOMS;

		}
	}
}
