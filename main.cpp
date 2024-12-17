#include<iostream>
#include<cstdio>
#include<chrono>
#include<Windows.h>
using namespace std;
const enum ROOMS { ENTRANCE = 7, FOOD_COURT = 8, CARTS = 9, CHECKOUT = 10, PRODUCE = 11, PHARMACY = 12, BAKERY = 13, BACK_ROOMS = 14, START = 15 };

void ListGen();
void CountDown();

int main() {
	const int TIME_LIMIT = 600; //Time limit in seconds
	auto start = chrono::steady_clock::now(); // Record start time
	bool timerRunning = false;
	int timeLeft = 600;


	int room = START; //Goes to start case when opened
	int health = 12; //Health set at 10
	string inventory[5] = { "" };//holds 5 items 


	string input;//reads strings

	while (input != "quit" && timeLeft > 0) { // runs while time is above 0 and user does not quit

		if (timerRunning == true) { //TIMER
			auto now = chrono::steady_clock::now();
			timeLeft = TIME_LIMIT - chrono::duration_cast<chrono::seconds>(now - start).count();
			system("Color F2");
			cout << "Time left: " << timeLeft / 60 << " minutes " << timeLeft % 60 << " seconds" << "     ";//Show remaining time
		}

		health--; //HEALTH 
		cout << "Health: " << health << endl;
		switch (room) {

		case 1: // Aisle 1 Dairy
			cout << "You are in Aisle 1 (Dairy) Hope your not lactose intolorent. Do you want milk or cheese?" << endl;
			cin >> input;

			if (input == "milk") {
				inventory[1] = "milk"; // Add milk to the inventory
				cout << "You picked up Milk." << endl;
			}
			else if (input == "cheese") {
				inventory[1] = "cheese"; // Add cheese to the inventory
				cout << "You picked up Cheese." << endl;
			}
			else {
				cout << "Sorry, that's not an option." << endl;
				health++;
			}

			cout << "You can go north, east, or south. Where would you like to go?" << endl;
			cin >> input;

			if (input == "north")
				room = PHARMACY;
			else if (input == "east")
				room = PRODUCE;
			else if (input == "south")
				room = 2;
			else {
				cout << "Sorry, that's not an option." << endl;
				health++;
			}
			break;


		case 2: //Aisle 2 Meat's
			cout << "You are in Aisle 2 (Meat's) get your protein, You can go north, east, and south" << endl;
			cin >> input;

			if (input == "north")
				room = 1;
			else if (input == "east")
				room = PRODUCE;
			else if (input == "south")
				room = 3;
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
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
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
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
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
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
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;
		case 6:
			cout << "You are in Aisle 6, You can go north, west, or south" << endl;
			cin >> input;

			if (input == "north")
				room = 5;
			else if (input == "west")
				room = PRODUCE;

			else if (input == "south") {
				cout << "Do you want to go to the entrance or food court(Food)?";
				cin >> input;

				if (input == "entrance")
					room = ENTRANCE;

				else if (input == "food")
					room = FOOD_COURT;

				else {
					cout << "Sorry, thats not an option" << endl;
					health++;
				}
				break;
			}

			else
				cout << "Sorry, thats not an option" << endl;
			break;

		case ENTRANCE://Entrance
			cout << "\nyou are walking through the entrance, you can go west, north and east" << endl;
			cin >> input;
			if (input == "west")
				room = CARTS;
			else if (input == "north")
				room = 6;
			else if (input == "east")
				room = FOOD_COURT;
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;

		case FOOD_COURT://Food court
			cout << "you are in the food court, you can go north and west" << endl;
			cin >> input;
			if (input == "north")
				room = 6;
			else if (input == "west")
				room = ENTRANCE;
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
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
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;

		case CHECKOUT://Checkout
			cout << "You are in the checkout, you can go north and east" << endl;
			cin >> input;
			if (input == "north")
				room = 3;
			else if (input == "east")
				room = CARTS;
			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;

		case PRODUCE:
			cout << "You are in the produce, you can go west, east, south or north" << endl;
			cin >> input;
			if (input == "west") {
				cout << "Do you want to go in Aisle 1, 2, or 3?" << endl;
				cin >> input;
				if (input == "1")
					room = 1;

				else if (input == "2")
					room = 2;

				else if (input == "3")
					room = 3;

				else {
					cout << "Sorry, thats not an option" << endl;
					health++;
				}
				break;
			}
			else if (input == "east") {
				cout << "Do you want to go in Aisle 4, 5, or 6?" << endl;
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

			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;

		case PHARMACY:
			cout << "You are in the pharmacy, you can go south or east" << endl;
			cin >> input;

			if (input == "south")
				room = 1;
			else if (input == "east")
				room = BACK_ROOMS;

			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;

		case BAKERY:
			cout << "\nYou are in the Backery, you can go south" << endl;
			cin >> input;

			if (input == "south")
				room = 4;

			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
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

			else {
				cout << "Sorry, thats not an option" << endl;
				health++;
			}
			break;

		case START:
			cout << "Welcome to Cart Craze!" << endl;
			//Ascii Art ------------------------------------------------
			cout << "    ______ " << endl;
			cout << "   /|_||_\\`.__ " << endl;
			cout << "  (.  _    _ _\\ " << endl;
			cout << "===\`-(_)--(_)- \'===\n\n\n\n";

			//Decribes rules
			cout << "Move around the store using the comands to collect items off your list see map for aisle descriptions. " << endl;
			cout << "you have enough health for 10 moves so make sure you go to the food court to keep your heath up. \n\n" << endl;
			cout << "You will have 5 second before the timer starts so listen for the beeps! Are you ready?" << endl;

			//Shopping list
			system("pause\n");
			cout << "Heres your shopping list" << endl;
			ListGen();
			room = ENTRANCE;
			//Time Limit
			CountDown();
			timerRunning = true;

		}
	}

	if (timeLeft <= 0) {
		cout << "Womp Womp, You're out of time!" << endl;
	}

}

void ListGen() {
	srand(time(NULL));

	string list[10];
	string foods[18] = { "Strawberries", "Carrots", // Produce
						"Milk", "Cheese", //Dairy A1
						"Shrimp", "Chicken", //Meat's A2
						"Croissants", "Bagels", //Bakery
						"Pizza", "Ice Cream", //Frozen foods A3
						"Chips", "Chocolate", // Snacks A4
						"Coffe", "Water", // Beverages A5
						"Ibuprofen", "Tylenol",//Pharmacy
						"Towels", "Dish" //Householf Items A6

	};

	for (int i = 0; i <= 9; i++) {
		int num = rand() % 18;
		list[i] = foods[num];
		printf("Item %d: %s\n", i + 1, list[i].c_str());
	}
	cout << "\n" << endl;

} //end of List generator-----------------------------------------------

void CountDown() {
	for (int i = 0; i <= 4; i++) {
		PlaySound(TEXT("countdown.wav"), NULL, SND_FILENAME);
		//Sleep(1000);
	}

}
