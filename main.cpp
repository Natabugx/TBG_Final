#include<iostream>
#include<cstdio>
using namespace std;
const enum ROOMS { ENTRANCE = 7, FOOD_COURT = 8, CARTS = 9, CHECKOUT = 10, PRODUCE = 11, PHARMACY = 12, BAKERY = 13, BACK_ROOMS = 14, START = 15 };

void ListGen();

int main() {

	ListGen();
	int room = ENTRANCE;
	string input;

	while (input != "quit") {
		switch (room) {

		case 1: //Aisle 1
			cout << "You are in Aisle 1, you can go north, east, and south" << endl;
			cin >> input;

			if (input == "north")
				room = PHARMACY;
			else if (input == "east")
				room = PRODUCE;
			else if (input == "south")
				room = 2;
			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case 2: //Aisle 2
			cout << "You are in Aisle 2, You can go north, east, and south" << endl;
			cin >> input;

			if (input == "north")
				room = 1;
			else if (input == "east")
				room = PRODUCE;
			else if (input == "south")
				room = 3;
			else
				cout << "Sorr, thats not an option" << endl;
			break;

		case 3: //Aisle 3
			cout << "You are in Aisle 3, You can go north, east, and south" << endl;
			cin >> input;

			if (input == "north")
				room = 2;
			else if (input == "east")
				room = PRODUCE;
			else if (input == "south")
				room = CHECKOUT;
			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case 4:
			cout << "You are in Aisle 4, You can go north, west, or south" << endl;
			cin >> input;

			if (input == "north")
				room = BAKERY;
			else if (input == "west")
				room = PRODUCE;
			else if (input == "south")
				room = 5;
			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case 5:
			cout << "You are in Aisle 5, You can go north, west, or south" << endl;
			cin >> input;

			if (input == "north")
				room = 4;
			else if (input == "west")
				room = PRODUCE;
			else if (input == "south")
				room = 6;
			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case 6:
			cout << "You are in Aisle 6, You can go north, west, or south" << endl;
			cin >> input;

			if (input == "north")
				room = 5;
			else if (input == "west")
				room = PRODUCE;

			else if (input == "south") {
				cout << "Do you want to go to the entrance or food court?";
				cin >> input;

				if (input == "entrance")
					room = ENTRANCE;

				else if (input == "food court")
					room = FOOD_COURT;

				else
					cout << "sorry, thats not an option" << endl;
				break;
			}

			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case ENTRANCE://Entrance
			cout << "you are walking through the entrance, you can go west, north and east" << endl;
			cin >> input;
			if (input == "west")
				room = CARTS;
			else if (input == "north")
				room = 6;
			else if (input == "east")
				room = FOOD_COURT;
			else
				cout << "sorry, thats not an option" << endl;
			break;

		case FOOD_COURT://Food court
			cout << "you are in the food court, you can go north and west" << endl;
			cin >> input;
			if (input == "north")
				room = 6;
			else if (input == "west")
				room = ENTRANCE;
			else
				cout << "sorry, thats not an option" << endl;
			break;

		case CARTS: //Carts
			cout << "you are by the carts, you can go west, north, and east" << endl;
			cin >> input;
			if (input == "west")
				room = CHECKOUT;
			else if (input == "north")
				room = PRODUCE;
			else if (input == "east")
				room = ENTRANCE;
			else
				cout << "sorry, thats not an option" << endl;
			break;

		case CHECKOUT://Checkout
			cout << "You are in the checkout, you can go north and east" << endl;
			cin >> input;
			if (input == "north")
				room = 3;
			else if (input == "east")
				room = CARTS;
			else
				cout << "sorry, thats not an option" << endl;
			break;

		case PRODUCE:
			cout << "You are in the produce, you can go west, east, south or north" << endl;
			cin >> input;
			if (input == "west") {
				cout << "Do you want to go in Aisle 1, 2, or 3?";
				if (input == "1")
					room = 1;

				else if (input == "2")
					room = 2;

				else if (input == "3")
					room = 3;

				else
					cout << "sorry, thats not an option" << endl;
				break;
			}

			else if (input == "east") {
				cout << "Do you want to go in Aisle 4, 5, or 6?";
				cin >> input;

				if (input == "4")
					room = 4;

				else if (input == "5")
					room = 5;

				else if (input == "6")
					room = 6;
			}

			else if (input == "south")
				room = CARTS;

			else if (input == "north")
				room = BACK_ROOMS;

			else
				cout << "sorry, thats not an option" << endl;
			break;

		case PHARMACY:
			cout << "You are in the pharmacy, you can go south or east" << endl;
			cin >> input;

			if (input == "south")
				room = 1;
			else if (input == "east")
				room = BACK_ROOMS;

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

		case BACK_ROOMS:
			cout << "You're not an employee!!!! Do you want to go west, south, or east? " << endl;
			cin >> input;

			if (input == "west")
				room = PHARMACY;

			else if (input == "south")
				room = PRODUCE;

			else if (input == "east")
				room = BACK_ROOMS;

			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case ENTRANCE:
			cout << "Welcome little cuh's yo.  "

		}
	}

}

void ListGen() {

	srand(time(NULL));

	string list[5];
	string foods[30] = {"Strawberries", "Carrots", "Bananas", "Tomatoes", "Broccoli",
						"Milk", "Cheddar Cheese", "Yogurt", "Butter", "Eggs",
						"Carrots", "Shrimp", "Chicken Breasts", "Croissants", "Bagels"
						"Frozen Pizza", "Ice Cream", "Canned Corn", "Wheat Bread","Salt", 
						"Chips", "Chocolate Bars", "Coffee Beans", "Sparkling Water","Olive Oil", 
						"Cough Medicine", "Tylenol", "DayQuil", "NyQuil", "Vitimins"
						
	};

	for (int i = 0; i <= 4; i++) {
		int num = rand() % 30;
		list[i] = foods[num];
		printf("Item %d: %s\n", i + 1, list[i].c_str());
	}

} //end of List generator-----------------------------------------------

