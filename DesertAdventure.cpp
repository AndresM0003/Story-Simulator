// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void desert()
{

	
	cout << "Before we get started Please fill out theses simple question. They will help you later.\n";
	cout << "All entries should be one word.";
	cout << "\n" << "\n";
	string userChoice;

	//OUTPUT & INPUT: Ask for certain words and correlate them with the
	//                corresponding variables
	

	//OUTPUT: displays first paragraph with certain words inserted
	cout << " \n\n\n\t *** Welcome TO The Great Desert Adventure! *** \n\n";
	cout << " \n\n\n\n\nWelcome Fellow Explorer, you are going ot help retrive the stolen ruby.\n";
	cout << " If You Are Successful you will get paid in horses!";
	cout << " But Be Careful If You Fail You Will Never Return To Your World \n";
	cout << " Quckly Head North To reach The First Level\n";
	//Level 1 - The Desert
	cout << "\n\n You Have Reached Level 1 The Great Desert\n";
	cout << " You Have To Cross this 10 Miles Dessert walking.";
	cout << " You have Made It HalfWays through the Desert, But You Are Out of Water \n";
	cout << " You Need To Find Water Quickly Or You Won't Make It Out Alive\n";
	cout << " To The West You think You Can See An Oasis\n";
	cout << " But East You Hear music, Probably From A village \n";
	cout << " Enter 2 For West Or 1 For East:\n\n";
	cin >> userChoice;
	// Make Variable For User Choice
	//Collect User Choice Here
	//Let's Get Results Based on UserChoice
	if (userChoice == "2")
	{
		cout << "  After Heading West Towards The Oasis You Quickly Realized That THere was no Oasis,\n";
		cout << "  but an Illusion Due to THe Immense heat and Dehydration! \n";
		cout << "  You have taken A Huge Risk By Traveling this Far out into the Desert With no Water.\n";
		cout << "  You Unfortunatley Have Died Due To Dehydration And Heat Stroke.\n";
		cout << " \n\n\t *** Game Over **** \n\n";
	}
	else if (userChoice == "1")
	{
		cout << "  You Have Decieded To Travel East\n";
		cout << "  As You Head East You See Something In THe distance\n";
		cout << "  It's a Small Village!\n";
		cout << "  You Have Successfully Found Water,and Food.\n";
	}
	else
	{
		cout << "\n\nYou Are Waisting Time, You Need To Stop messing around And Get Out Of This Desert!\n\n";
	}
	//This Is Level 2 Getting Across The Desert
	cout << "  \n\n\n\tNow For Level 2- Getting Across The Desert\n";
	cout << "  Fortunatley For You A villager Is Heading to The Kingdom Located Across The Desert!\n";
	cout << "  Will You Accept His Help?\n";
	cout << "  Enter 1 To Accept His Help Or Enter 2 To Cross The Desert By Yourself: \n\n";
	// Make Variable For User Choice
	//Collect User Choice Here
	cin >> userChoice;
	//Let's Get Results Based on UserChoice
	if (userChoice == "1")
	{
		cout << "  \n You Have Chosen To Take The Kind villagers Help.\n";
		cout << "  You Get On the Back Of the Villagers camels And You Head to The Kingdom.\n";
		cout << "  It Takes You Only thirty Minutes to arrive To The Kingdom ? \n";
		cout << "  \n\n\t Welcome To The Kingdom\n\n";
	}
	else if (userChoice == "2")
	{
		cout << "  \n You Have Chosen To Travel Across The Desert Becuase Your Ego Is Too Big. \n";
		cout << "  As You are walking Through The desert You Spot A Mountain In the Disance\n";
		cout << "  You Decide To Go Towards It And Find A Cave To Take Shelter And Rest\n";
		cout << "  As You Sit Down You Feel A Sharp Pain On Your Arm\n";
		cout << "  You Have Been " << verb << " By A Venemous Rattle Snake!\n";
		cout << "  You Have Died A Painful Death In The Cave\n";
		cout << "  \n\n\t ***Game Over****\n\n";
	}
	else
	{
		cout << " \n Don't You want To Win your Prize?\n";
	}
	//Level 3
	cout << "  \n\n\n\Welcome To Level 3\n";
	cout << "  You Enter A Bar And Hear People Talking About The Ruby That Was Stolen By King Carl The third\n";
	cout << "  You Also Heard That It Is Being Held At The Highest room Of The Castle Which Is King Calr's Room \n";
	cout << "  You Figure There Is No Time To Waste So You Head Towards The Castle, But Before You Leave A Old Lady Gives You a scroll\n";
	cout << "  So You Put It In Your Sachel And Head Out\n";
	cout << "  As You Head To The Castle Word Has Been Going Around About What Your Are Doing, So King Carl Has Sent Troops to Stop You. \n";
	cout << "  They Cut You Off Midway To The Castle And They Won't Let You Pass\n";
	cout << "  You Can Either Run Away Or Choose To Fight.\n";
	cout << "  What Will You Do?\n";
	cout << "  Enter 1 To Run Away Or Enter 2 To Fight Them:\n\n";
	// Make Variable For User Choice
	//Collect User Choice Here
	cin >> userChoice;
	//Let's Get Results Based on UserChoice
	if (userChoice == "1")
	{
		cout << "  \n You Have Chosen To Run Away\n";
		cout << "  You Quickly Turn Around And Run Away.\n";
		cout << "  But There Are Troops Behind You Too?\n";
		cout << "  You Are Captured By The Troops And Decapitated In Front Of The Entire Kingdom!\n";
		cout << "  \n\n\t ***Game Over****\n\n";
	}
	else if (userChoice == "2")
	{
		cout << "  \n You Have Chosen To Fight Them.\n";
		cout << "  As They Start Rushing Towards You See Something Glowing In Your Sachel \n";
		cout << "  The scroll That The Old Lady Gave You Is Glowing \n";
		cout << "  And As Soon As You Pick It Up It Shoots A blast Of Energy Into Your Body?\n";
		cout << "  You Have Benn granted Super Strength!\n";
		cout << "  You Fight And Defeat the Troops With Ease\n";
		cout << "  You Continue running To The Castle \n";
		cout << "  \n\nYou Have Finally Made It to the Castle!\n\n";
	}
	else
	{
		cout << " The Ruby Isn't Going To Find Itslef!\n";
	}
	//Level 4
	cout << "  \n\n\n\Welcome To Level 4\n";
	cout << "  You Have Reached the Front Of The Castle\n";
	cout << "  You can Either  Grab A Rope And Climp Up Through King Carl's Room Window \n";
	cout << "  Or You Can Enter Through The Front Door And Fight The Troops To The Top Of THe Castle\n";
	cout << "  What Will You Choose?\n";
	cout << "  Enter 1 To Use Front Door Or Enter 2 To Climb Though The Window:\n\n";
	// Make Variable For User Choice
	//Collect User Choice Here
	cin >> userChoice;
	//Let's Get Results Based on UserChoice
	if (userChoice == "1")
	{
		cout << "  \n You Have Chosen To Go Through The Front Door \n";
		cout << "  The Whole Kingdom Army Is Waiting For You\n";
		cout << "  Luckily You Have Super Strength And You Have Fought Your Way To The last Hallway Succesfully\n";
		cout << "  You Made It To The Last Floor You Are Almost There!\n";
	}
	else if (userChoice == "2")
	{
		cout << "  \n You Have Chosen To Grab A Rope And And Climb Up The Window.\n";
		cout << "  You Secure The Rope And Begin Climbing \n";
		cout << "  You Make It Half Way Up And King Carl Cuts The Rope\n";
		cout << "  You Free Fall 200 Feet To Your Death \n";
		cout << "  \n\n\t ***Game Over****\n\n";
	}
	else
	{
		cout << "  You Will Never Get Your Prize If You Don't Get the Ruby!\n";
	}
	//Level 5
	cout << "  \n\n\n\Welcome To Level 5\n";
	cout << "  You Have Reached The Last Floor Of the Castle\n";
	cout << "  Unflortunatley there Are Two Doors\n";
	cout << "  One Door Holds the Ruby And The Other Could Hold Something Dangerous!\n";
	cout << "  What Will You Choose?\n";
	cout << "  Enter 1 To Open The First Door Or Enter 2 To Open The Second Door:\n\n";
	// Make Variable For User Choice
	//Collect User Choice Here
	cin >> userChoice;
	//Let's Get Results Based on UserChoice.
	if (userChoice == "1")
	{
		cout << "  \n You Have Chosen To Go Throuhg The First Door\n";
		cout << "  You Open the Door And Are Shocked To See The Most Beautiful Princess You Have Ever Seen\n";
		cout << "  It Is love At first Site\n";
		cout << "  She Had Been Locked Up There By King Carl\n";
		cout << "  She Beggs You To Help Her\n";
		cout << "  So You Help Her Escape And Forget About The Ruby!\n";
		cout << "  You Realize That Maybe You Should Stay And Be With The Love Of Your Life\n";
		cout << "  You and The Princess Escape And Leave The Kingdom\n";
		cout << "  You Guys Go To The Village In The Desert And Live Happily Ever After\n";
		cout << "  \n\n\t ***The End****\n\n";
	}
	else if (userChoice == "2")
	{
		cout << "  \n You Have Chosen To Enter The Second Door \n";
		cout << "  This Door Lead To King Carl's Room \n";
		cout << "  When You Walk In You See King Carl Holding A Sword\n";
		cout << "  You Simply Over Power Him And Sit On Top Of Him Until He Gives You The Ruby\n";
		cout << "  king Carl Finally Gives In And Hands Over The Ruby\n";
		cout << "  You Grab The Ruby And It Starts Glowing\n";
		cout << "  You throw the Ruby in you sachel and take it back home with you\n";
		cout << "  \n\n\t ***You Have Won And Recieved Your Prize Of 10,000 horses * ***\n\n";
	}
	else
	{
		cout << "  You Are Almost To The End!\n";
	}
}
