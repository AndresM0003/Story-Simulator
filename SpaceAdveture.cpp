#include <iostream>
#include <string>
using namespace std;

void space()
{
	string name 
	cout << " \n\n\n\t *** Welcome to The Outerspace Adventure! *** \n\n";
	cout << "Are you ready for some out of this world fun cadet"<< name<<"!\n";
	cout << "You have been chosen to take part in this space mission!\n";
	cout << "You are in the spaceship and ready for take off\n";
	cout << "In T-Minus 3 Seconds\n";
	cout << "3 ...... 2 ...... 1\n";
	cout << "BLAST OFF\n";
	cout << "As your ship is entering orbit you pass out from all the G-Force.\n";
	cout << "You wake up to the sound of blaring alarms\n";
	cout << "You are in th medbay of the space station\n";
	cout << "You quickly get up and check the cameras to see what the problem is.\n ";
	cout << "You can't believe your eyes there are big green aliens in space station\n";
	cout << "You notice that they have killed everyone in the space station and you are the only survivor left.\n";
	cout << "You start panicking and decide that you have to make it to the escape pod\n";
	cout << "You also realize that you are hungry and you head to the fridge for the sandwhich that you packed";
	cout << "You notice that it's gone, one of you crew mates ate it.\n";
	cout << "Now you don't feel bad for their deaths, but you still have to make it to the escape pods\n";
	cout << "The escape pods are four levels under you\n";
	cout << "You can either take the stairs or take the elevator\n";
	cout << "Enter 1 for the stairs or enter 2 for the elevator: \n";
	string userChoice;
	getline(cin, userChoice);
	if (userChoice == "1")
	{
		cout << "You have chosen to take the stairs to the thrid floor\n";
		cout << "You avoided the aliens and have made it to the third floor safely\n";
		cout << "You notice a light coming from a room.\n";


	}
	else if (userChoice == "2")
	{
		cout << "You decided to take to the elevator becuase you don't like taking stairs\n";
		cout << "When you go into the elevator one of the Aliens cut the wires and you start falling\n";
		cout << "You end up falling to your death\n";
		cout << "  \n\n\t ***Game Over****\n\n";

	}
	cout << "Once you are in the third floor you go to the lab and where you find a video message\n";
	cout << "On the video is is the head scientist of the lab\n";
	cout << "He explains that they were experimenting on an alien form they found on the moon\n";
	cout << "Then a space ship showed up to retrieve back the alien\n";
	cout << "The Aliens invaded the spacestaion\n";
	cout << "He expalins to you that you can either make it to the escape pods or blow up the ship killing the aliens and yourself\n";
	cout << "What will you choose to do?\n";
	cout << "Enter 1 for escape pod or Enter 2 for blowing up the ship\n";
	getline(cin, userChoice);
	if (userChoice == "1")
	{
		cout << "You have chosen to go to the escape pods\n";
		cout << "Unfortunatley they are on the first level and you ae on the third\n";
		cout << "It's going to be risky getting there, but you have to have faith in yourself\n";
		cout << "It's go time!";
	}
	else if (userChoice == "2")
	{
		cout << "You chose to self destruct the ship\n";
		cout << "You are the bravest cadet ever\n";
		cout << "You chose to save the earth and destroy all the Aliens while you have the chance\n";
		cout << "After you pressed the button you sit there and watch the countdown\n";
		cout << "SELF DESTRUCTION IN 5 SECONDS\n";
		cout << "5 .....4 ......3 .......2 ......1";
		cout << "Yor heroism saved the planet";
		cout << "  \n\n\t ***GAME OVER****\n\n";

	}
	cout << "Now you have to make your way to the escape pod without alarming the aliens\n";
	cout << "You just have to make it through two more floors\n";
	cout << "You start running down the hallway to the stairs.\n";
	cout << "On you way to the stairs you spot an alien with a blaster and hide\n";
	cout << "Your scared and don't know what to do\n";
	cout << "You can either try and sneek right pass him or you can try to take him out becuase it's only one\n";
	cout << "Theres no time you have to act now!\n";
	cout << "Enter 1 for sneeking passed him or Enter 2 to try and take him out: ";

	getline(cin, userChoice);
	if (userChoice == "1")
	{
		cout << "You have chosen to try and sneek past him\n";
		cout << "You wait until he turns his back\n";
		cout << "Once he turns you try and book it to the stairs\n";
		cout << "Unfortunaltey the Alien spots you out the corner of his eye and shoots you with his blaster\n";
		cout << "You get shot in the chest and slowly bleed out\n";
		cout << "  \n\n\t ***GAME OVER****\n\n";
	}
	else if (userChoice == "2")
	{
		cout << "You have chosen to try and take him out\n";
		cout << "You spot a pipe next to you\n";
		cout << "You wait until he turns around then BAM\n";
		cout << "You knock him out\n";
		cout << "You quickly stuff the body in a closet and take his blaster just inn case\n";
		cout << "You make it safley to the stairs and go straight to the sencond floor\n";
	}
	cout << "You are now armed and on the second level\n";
	cout << "You are so close to safety\n";
	cout << "As your making your way to the stairs you realize that the stairs have been blocked in\n";
	cout << "You start panicking\n";
	cout << "You also hear more Aliens approaching so you run into a the supply room to hide";
	cout << "You realize that you can either go through the vents to get to the first floor\n";
	cout << "Or you can usethe saw you found in the room to cut a hole through the floor into the first floor\n";
	cout << "What will you choose?\n";
	cout << "Enter 1 for the vent or Enter 2 to cut a hole: ";
	getline(cin, userChoice);
	if (userChoice == "1")
	{
		cout << "You have chosen to go through the vents\n";
		cout << "You find a chair and make your way into the vent system\n";
		cout << "You are blind up there becuase you have no map\n";
		cout << "You have to try and go down to the first floor\n";
		cout << "You think that you are getting close \n";
		cout << "You open the vent and realize that you took the garbage shoot instead of the vent";
		cout << "You open the door and get sucked into outerspace\n";
		cout << "Without a spance suit you end up soffocating and dying\n";
		cout << "  \n\n\t ***GAME OVER****\n\n";
	}
	else if (userChoice == "2")
	{
		cout << "You decided to try and saw a whole into the floor\n";
		cout << "After a lot of work, sweat and tears";
		cout << "You are successful and make it to the first floor\n";
		cout << "You can spot the room with the escape pods in them.\n";
	}
	cout << "You are on the first floor\n";
	cout << "You ar so close yet so far\n";
	cout << "You make a run to the escape pod room\n";
	cout << "You think your in the clear\n";
	cout << "But once you open the door and go inside\n";
	cout << "You are met with five aliens pionting their blasters at you.\n";
	cout << "You can either choose to surrender because you figure that being a prisoner is better than death\n";
	cout << "Or you decide to take your balster and fight back\n";
	cout << "What will you choose?";
	cout << "Enter 1 to surrender or Enter 2 to fight back: ";
	getline(cin, userChoice);
	if (userChoice == "1")
	{
		cout << "You have chosen to surrender and become their prisoner\n";
		cout << "But they don't take prisoners\n";
		cout << "So you end up being blasted to your deat!";
		cout << "  \n\n\t ***GAME OVER****\n\n";
	}
	else if (userChoice == "2")
	{
		cout << "You have chosen to fight back\n";
		cout << "It's a good thing that you are a retired special forces officer\n";
		cout << "You quickly take cover and start blasting back\n";
		cout << "You are being blasted form every direction\n";
		cout << "But some of these aliens have a horrible aim\n";
		cout << "You easily blast all of them, but not with out being shot in the arm\n";
		cout << "You quickly take your belt and wrap it tightly around your arm to stop the bleeding\n";
		cout << "You make it into an escape pod and return safely to earth\n";
		cout << "You warn everyone that Aleins are going to invade the Earth\n";
		cout << "Your warning gave the miltiary enough time to prepare for battle";
		cout << "When the aliens tried to invade, earth was ready and they defeated them\n";
	}
	cout << "  \n\n\t ***Congratualtions You Saved The Planet Cadet****\n\n";
}

