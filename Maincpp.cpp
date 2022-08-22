/*Andres Mora
August 21, 2022
*/


#include <iostream>
#include "FinalProject.h"
#include <string>
using namespace std;


int main()
{
	string name;
	cout << "Hello Adventurer What is Your Name?\n";
	cin >> name;
	cout << "\n";
	cout << "That's a cool name!\n";
	cout << "My name is steve \n";
	cout << "Nice to Meet you\n";



	//Title
	cout << " \n\n\n\t *** Welcome TO The Story Simulator *** \n\n\n";
	//This is an Ineractive simulator for two different storylines.
	cout << "\n" << "\n";
	cout << "Today we have for you two different adventures.\n";
	cout << "You can either go on a Desert adventure or you can choose to go on an out of this word exploration!\n";
	cout << "Enter 1 for Desert Adeventure or 2 for out of this world Adventure: ";
	string userChoice;
	cin >> userChoice;
	if (userChoice == "1") {

		desert();
		map();
	}
	else if (userChoice == "2") {
		space();
	}
}