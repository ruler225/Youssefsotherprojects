#include<iostream>			
#include<string>			
#include<cstdlib> 
#include<stdlib.h>		
#include<ctime> 
#include<windows.h>
#include<fstream>
#include<stdio.h>
#include<sstream>	
#include<conio.h>						

using namespace std;		


enum savestat {Auto, No_save, No_auth, Save_available};

savestat save = No_save;
bool flee = true;
bool storestat = false;
bool troll = true;
bool sound = true;
bool repeat = false;
bool statraise = false;
bool auth = false;
bool savepending = false;
string cheatcommand;
string item1read;
string item2read;
string item3read;
string item4read;
string item5read;
string cheatinvincibility = "off";
string twoturnsinrow = "off";
string monsterdoesnothing = "off";
string heroname;
string item5; 
string item4; 
string item3;
string item2; 
string item1;
string action;
string actionmenu1 = "1)attack\n2)defend\n3)flee\n4)nothing\n5)view your current stats";
string actionmenu2 = "1)attack\n2)defend\n3)flee\n4)magic\n5)view your current stats";
string actionmenu3 = "1)attack\n2)defend\n3)flee\n4)magic\n5)view your current stats\n6)Items";
string actionmenu4 = "1)attack\n2)defend\n3)flee\n4)nothing\n5)view you current stats\n6)items";
string specialattackmenu1 = "1)back to basic moves menu\n2)nothing\n3)heal (2 sp)\n";
string specialattackmenu2 = "1)back to basic moves menu\n2)nothing\n3)heal (2 sp)\n4)fireball (4 sp)\n";
string menuitems1;
string menuitems2; 
string menuitems3;
string menuitems4;
string menuitems5;
string monstername;
int weapon;
int herohealth = 5; 
int monsterhealth;
int turncheat;
int lvl = 1;
int sp;
int damage; 
int herodef = 2;
int herostrength = 4;
int herofullh = 5;
int monsterfullh;
int monsterheal;
int monsterstrength;
int monsterdef;
int enemydamage;
int spfull;
int money;
int levelup;
int battle;
int xp;
int cocoapuffs;
int rewardcoins;
int item1has;
int item2has;
int item3has;
int item4has;
int item5has;
int item1type;
int item2type;
int item3type;
int item4type;
int item5type;
int item1a;
int item2a;
int item3a;
int item4a;
int item5a;
int state;
int itemmenu;
int com;
int wrongpass;









void item1type1() {
	system("cls");
	if (item1a > 0) {
	cout << heroname << " is using a Healing Potion" << endl;
	if (sound == true) {
	Beep(800,220);
}
	herohealth = herofullh;
	cout << "\n" << heroname << " now has " << herohealth << endl << endl;
	item1a = item1a - 1;
}
else if (item1a == 0) {
	cout << "You don't have any more healing potions!" << endl << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
}
	system("PAUSE");
	repeat = true;
}
}


void item2type1() {
	system("cls");
	if (item2a > 0) {
	cout << heroname << " is using a Healing Potion" << endl;
	if (sound == true) {
	Beep(800,220);
}
	herohealth = herofullh;
	cout << "\n" << heroname << " now has " << herohealth << endl << endl;
	item2a = item2a - 1;
}
else if (item2a == 0) {
	cout << "You don't have any more healing potions!" << endl << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
}
	system("PAUSE");
	repeat = true;
}
}

void item3type1() {
	system("cls");
	if (item3a > 0) {
	cout << heroname << " is using a Healing Potion" << endl;
	if (sound == true) {
	Beep(800,220);
}
	herohealth = herofullh;
	cout << "\n" << heroname << " now has " << herohealth << endl << endl;
	item3a = item3a - 1;
}
 if (item3a == 0) {
	cout << "You don't have any more healing potions!" << endl << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
}
	system("PAUSE");
	repeat = true;
}
}


void item4type1() {
	system("cls");
	if (item4a > 0) {
	cout << heroname << " is using a Healing Potion" << endl;
	if (sound == true) {
	Beep(800,220);
}
	herohealth = herofullh;
	cout << "\n" << heroname << " now has " << herohealth << endl << endl;
	item4a = item4a - 1;
}
else if (item4a == 0) {
	cout << "You don't have any more healing potions!" << endl << endl;
	if (sound == true) {
	
	Beep(800,220);
	Beep(800,220);
}
	system("PAUSE");
	repeat = true;
}
}

void item5type1() {
	system("cls");
	if (item5a > 0) {
	cout << heroname << " is using a Healing Potion" << endl;
	if (sound == true) {
	Beep(800,220);
}
	herohealth = herofullh;
	cout << "\n" << heroname << " now has " << herohealth << endl << endl;
	item5a = item5a - 1;
	
}
else if (item5a == 0) {
	cout << "You don't have any more healing potions!" << endl << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
}
	system("PAUSE");
	repeat = true;
}
}



void item1type2() {
	system("cls");
	if (item1a > 0) {
		cout << heroname << " is coocoo for cocoa puffs!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cocoapuffs = cocoapuffs + 3;
		item1a = item1a - 1;
	}
	else if (item1a == 0) {
		cout << "You don't have any more cocoa puffs!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		repeat = true;
	}
}

void item2type2() {
	system("cls");
	if (item2a > 0) {
		cout << heroname << " is coocoo for cocoa puffs!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cocoapuffs = cocoapuffs + 3;
		item2a = item2a - 1;
	}
	else if (item2a == 0) {
		cout << "You don't have any more cocoa puffs!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		repeat = true;
	}
}

void item3type2() {
	system("cls");
	if (item3a > 0) {
		cout << heroname << " is coocoo for cocoa puffs!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cocoapuffs = cocoapuffs + 3;
		item3a = item3a - 1;
	}
	else if (item3a == 0) {
		cout << "You don't have any more cocoa puffs!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		repeat = true;
	}
}

void item4type2() {
	system("cls");
	if (item4a > 0) {
		cout << heroname << " is coocoo for cocoa puffs!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cocoapuffs = cocoapuffs + 3;
		item4a = item4a - 1;
	}
	else if (item4a == 0) {
		cout << "You don't have any more cocoa puffs!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		repeat = true;
	}
} 

void item5type2() {
	system("cls");
	if (item5a > 0) {
		cout << heroname << " is coocoo for cocoa puffs!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cocoapuffs = cocoapuffs + 3;
		item5a = item5a - 1;
	}
	else if (item5a == 0) {
		cout << "You don't have any more cocoa puffs!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		repeat = true;
	}
}

void item1type3() {
	system("cls");
	cout << "Whoa! How did you get here!? This is an incomplete part of code.This function merely acts as a placeholder.Everything that happens from this point on may be extra glitchy.The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n" << endl;
	if (sound == true) {
	
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item1 == "Healing Potion") {
		item1type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}
	
	else if (item1 == "Cocoa Puffs") {
		item1type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}
	
	

	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}
void item2type3() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item2 == "Healing Potion") {
		item2type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item2 == "Cocoa Puffs") {
		item2type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item3type3() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item3 == "Healing Potion") {
		item3type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item3 == "Cocoa Puffs") {
		item3type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item4type3() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item4 == "Healing Potion") {
		item4type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item4 == "Cocoa Puffs") {
		item4type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item5type3() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
	}
	Sleep(1000);
	if (item5 == "Healing Potion") {
		item5type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item5 == "Cocoa Puffs") {
		item5type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;

}

void item1type4() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
	}
	Sleep(1000);
	if (item1 == "Healing Potion") {
		item1type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item1 == "Cocoa Puffs") {
		item1type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item2type4() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
	}
	Sleep(1000);
	if (item2 == "Healing Potion") {
		item2type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item2 == "Cocoa Puffs") {
		item2type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item3type4() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item3 == "Healing Potion") {
		item3type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item3 == "Cocoa Puffs") {
		item3type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item4type4() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item4 == "Healing Potion") {
		item4type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item4 == "Cocoa Puffs") {
		item4type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	
	_getch();
	repeat = true;
}

void item5type4() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
		Beep(800, 220);
	}
	Sleep(1000);
	if (item5 == "Healing Potion") {
		item5type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item5 == "Cocoa Puffs") {
		item5type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}

	_getch();
	repeat = true;
}

void item1type5() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n \n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item1 == "Healing Potion") {
		item1type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item1 == "Cocoa Puffs") {
		item1type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item2type5() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item2 == "Healing Potion") {
		item2type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item2 == "Cocoa Puffs") {
		item2type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}

void item3type5() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n \n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item3 == "Healing Potion") {
		item3type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item3 == "Cocoa Puffs") {
		item3type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
}

void item4type5() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}

	_getch();
	repeat = true;
}

void item5type5() {
	system("cls");
	cerr << "Whoa! How did you get here!? This is an incomplete part of code. This function merely acts as a placeholder. Everything that happens from this point on may be extra glitchy. The likely cause of this error is a modified savegame. COMPUTERDOOM will now attempt to restore your item to a proper state.....\n\nPlease wait....\n\n\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	Sleep(1000);
	if (item5 == "Healing Potion") {
		item5type = 1;
		Sleep(1000);
		cout << "Successfully restored the item state!" << endl;
	}

	else if (item5 == "Cocoa Puffs") {
		item5type = 2;
		Sleep(1000);
		cout << "Successfully restored the item state" << endl;
	}



	else {
		cout << "Failed to repair the item! :(" << endl;
	}
	_getch();
	repeat = true;
}


void itemmenuparse() {

		itemmenu = item1has + item2has + item3has + item4has + item5has;
		stringstream mi1, mi2, mi3, mi4, mi5;
		
		switch (itemmenu) {
			case 1:
			mi1 << "\n\n1) " << item1 << " (" << item1a << ")\n2)return to basic moves menu";
			menuitems1 = mi1.str();
			break;
			case 2:
				mi2 << "\n\n1) " << item1 << " (" << item1a << ")\n2) " << item2 << " (" << item2a << ")\n3)return to basic moves menu";
				menuitems2 = mi2.str();
				break;
			case 3:
				mi3 << "\n\n1) " << item1 << " (" << item1a << ")\n2) " << item2 << " (" << item2a << ")\n3) " << item3 << " (" << item3a << ")\n4)return to basic moves menu";
				menuitems3 = mi3.str();
				break;
			case 4:
					mi4 << "\n\n1) " << item1 << " (" << item1a << ")\n2) " << item2 << " (" << item2a << ")\n3) " << item3 << " (" << item3a << ")\n4) " << item4 << " (" << item4a << ")\n5)return to basic moves menu";
					menuitems4 = mi4.str();
					break;
			case 5:
					mi5 << "\n\n1) " << item1 << " (" << item1a << ")\n2) " << item2 << " (" << item2a << ")\n3) " << item3 << " (" << item3a << ")\n4) " << item4 << " (" << item4a << ")\n5) " << item5 << " (" << item5a << ")\n6)return to basic moves menu";
					menuitems5 = mi5.str();
					break;
}
		
	
}






int itemhandler() {
	system("cls");
	itemmenuparse();
	if (itemmenu == 5) {
		cout << "Items:\n\n" << menuitems5 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;
		
		if (action == "6") {
			repeat = true;
			return 0;
		}
		
		else if (action == "1") {
			switch (item1type) {
				case 1:
					item1type1();
					break;
				case 2:
					item1type2();
					break;
				case 3:
					item1type3();
					break;
				case 4:
					item1type4();
					break;
				case 5:
					item1type5();
					break;
				default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
					
			}
		} 
		
			else if (action == "2") {
			switch (item2type) {
				case 1:
					item2type1();
					break;
				case 2:
					item2type2();
					break;
				case 3:
					item2type3();
					break;
				case 4:
					item2type4();
					break;
				case 5:
					item2type5();
					break;
					default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
					
			}
		}
		
			else if (action == "3") {
			switch (item3type) {
				case 1:
					item3type1();
					break;
				case 2:
					item3type2();
					break;
				case 3:
					item3type3();
					break;
				case 4:
					item3type4();
					break;
				case 5:
					item3type5();
					break;
				default:
					system("cls");
						cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}  
	else if (action == "4") {
			switch (item4type) {
				case 1:
					item4type1();
					break;
				case 2:
					item4type2();
					break;
				case 3:
					item4type3();
					break;
				case 4:
					item4type4();
					break;
				case 5:
					item4type5();
					break;
				default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid.This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		} 
		
			else if (action == "5") {
			switch (item5type) {
				case 1:
					item5type1();
					break;
				case 2:
					item5type2();
					break;
				case 3:
					item5type3();
					break;
				case 4:
					item5type4();
					break;
				case 5:
					item5type5();
					break;
				default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}

			else {
				system("cls");
				cout << "Invalid Input\n\n" << endl;
				if (sound == true) {
				Beep(800,220);
				Beep(800,220);
			}
				system("pause");
				itemhandler();
			}

	}
	
	else if (itemmenu == 1) {
		cout << "Items:\n\n" << menuitems1 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;
	
	if (action == "1") {
		switch (item1type) {
			case 1:
				item1type1();
				break;
			case 2:
				item1type2();
				break;
			case 3:
				item1type3();
				break;
			case 4:
				item1type4();
				break;
			case 5:
				item1type5();
				break;
			default:
				system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
		
		}
	}
	else if (action == "2") {
		repeat = true;
		return 0;
	}
		
	else {
		system("cls");
		cout << "Invalid Input\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
		itemhandler();
	}

	}
	
	else if (itemmenu == 2) {
		cout << "Items:\n\n" << menuitems2 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;
		
		if (action == "3") {
			repeat = true;
			return 0;
		}
		
		else if (action == "1") {
			switch (item1type) {
				case 1:
					item1type1();
					break;
				case 2:
					item1type2();
					break;
				case 3:
					item1type3();
					break;
				case 4:
					item1type4();
					break;
				case 5:
					item1type5();
					break;
				default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		} 
		
			else if (action == "2") {
			switch (item2type) {
				case 1:
					item2type1();
					break;
				case 2:
					item2type2();
					break;
				case 3:
					item2type3();
					break;
				case 4:
					item2type4();
					break;
				case 5:
					item2type5();
					break;
				default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}
	
			else {
				system("cls");
				cout << "Invalid Input\n" << endl;
				if (sound == true) {
				Beep(800,220);
				Beep(800,220);
			}
				system("pause");
				itemhandler();
			}
	
}

	else if (itemmenu == 3) {
		cout << "Items:\n\n" << menuitems3 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;

		if (action == "4") {
			repeat = true;
			return 0;
		}

		else if (action == "1") {
			switch (item1type) {
			case 1:
				item1type1();
				break;
			case 2:
				item1type2();
				break;
			case 3:
				item1type3();
				break;
			case 4:
				item1type4();
				break;
			case 5:
				item1type5();
				break;
			default:
				system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;		}
		}

		else if (action == "2") {
			switch (item2type) {
			case 1:
				item2type1();
				break;
			case 2:
				item2type2();
				break;
			case 3:
				item2type3();
				break;
			case 4:
				item2type4();
				break;
			case 5:
				item2type5();
				break;
			default:
				system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}

		else if (action == "3") {
			switch (item3type) {
			case 1:
				item3type1();
				break;
			case 2:
				item3type2();
				break;
			case 3:
				item3type3();
				break;
			case 4:
				item3type4();
				break;
			case 5:
				item3type5();
				break;
			default:
				system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}

		else {
			system("cls");
			cout << "Invalid Input\n" << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
			system("pause");
			itemhandler();
		}

	}
else if (itemmenu == 4) {
		cout << "Items:\n\n" << menuitems4 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;
		
		if (action == "5") {
			repeat = true;
			return 0;
		}
		
		else if (action == "1") {
			switch (item1type) {
				case 1:
					item1type1();
					break;
				case 2:
					item1type2();
					break;
				case 3:
					item1type3();
					break;
				case 4:
					item1type4();
					break;
				case 5:
					item1type5();
					break;
				default:
					system("cls");
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		} 
		
			else if (action == "2") {
			switch (item2type) {
				case 1:
					item2type1();
					break;
				case 2:
					item2type2();
					break;
				case 3:
					item2type3();
					break;
				case 4:
					item2type4();
					break;
				case 5:
					item2type5();
					break;
				default:
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}
		
			else if (action == "3") {
			switch (item3type) {
				case 1:
					item3type1();
					break;
				case 2:
					item3type2();
					break;
				case 3:
					item3type3();
					break;
				case 4:
					item3type4();
					break;
				case 5:
					item3type5();
					break;
				default:
						cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		}  
	else if (action == "4") {
			switch (item4type) {
				case 1:
					item4type1();
					break;
				case 2:
					item4type2();
					break;
				case 3:
					item4type3();
					break;
				case 4:
					item4type4();
					break;
				case 5:
					item4type5();
					break;
				default:
					cout << "An error occured when attempting to use this item. Be sure that the name of the selected item was valid. This is most likely caused by a corrupted savegame. If this continues to cause problems, please delete the corrupted savegame." << endl;
					if (sound == true) {
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
					Beep(800,220);
				}
					_getch();
					break;
			}
		} 

	else {
		system("cls");
		cout << "Invalid Input\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
		itemhandler();
	}
}
else  {
	system("cls");
	cerr << "An error has occured while loading the items menu. This could either be because you don't have any items, and you were accidentally redirected to the items menu, or there was an error processing an earlier purchase of items." << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	_getch();
}


return 0;
}

 

void chkinventorysob() {
	

	if (weapon == 0) {
		NULL;
	}

	else if (weapon == 1) {
		herostrength = herostrength + 5;
	}
	else if (weapon == 2) {
		herostrength = herostrength + 10;
}

	else {
		system("cls");
		cerr << "An error occured when performing pre-battle weapon checks. The cause of this may be a corrupted savegame. Your weapon may malfunction, or not function at all during battle" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		_getch();
	}
	
	itemmenu = item1has + item2has + item3has + item4has + item5has;

}

void chkinventoryeob() {
	
	if (weapon == 0) {
		NULL;
	}
	
	else if (weapon == 1) {
		herostrength = herostrength - 5;
	}
	else if (weapon == 2) {
		herostrength = herostrength - 10;
	}
	
	else {
		system("cls");
		cerr << "Aw snap! Couldn't wrap things up with the weapons. The problem could be a corrupted savegame." << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		_getch();
	}
	
	if (item1a == 0) {
		item1 = item2;
		item1a = item2a;
		item1has = item2has;
		item1type = item2type;
	}
	if (item2a == 0) {
		item2 = item3;
		item2a = item3a;
		item2has = item3has;
		item2type = item3type;
	}
	
	if (item3a == 0) {
		item3 = item4;
		item3a = item4a;
		item3has = item4has;
		item3type = item4type;

	}
	if (item4a == 0) {
		item4 = item5;
		item4a = item5a;
		item4has = item5has;
		item4type = item5type;

	}
	if (item5a == 0) {
		item5has = 0;
		item5 = "";
		item5type = 0;
	}
	if (item1a == 0) {
			item1 = item2;
			item1a = item2a;
			item1has = item2has;
			item1type = item2type;

	}


}
 



int itemstore() {
	cin.ignore(256, '\n');
	while (action != "5") {
	system("cls");
	system("color a");
	cout << "You have " << money << " coins\n\n" << endl;
	if (troll == true) {
		cout << "Welcome to the shop! See something you like? Buy it! If you don't, then be sure to check back as the store will be updated to display new stuff as you advance through the game. Type about before the number to learn more. For example, \"about 1\":\n\n\n1)Iron Sword (150 coins)\n2)Healing potion (50 coins each)\n3)THE PASSWORD FOR TOTAL DOMINATION!!! (1 coin)\n4)Cocoa puffs (75 coins)\n5)exit" << endl;
	}
	else if (troll == false) {
		cout << "Welcome to the shop! See something you like? Buy it! If you don't, then be sure to check back as the store will be updated to display new stuff as you advance through the game. Type about before the number to learn more. For example, \"about 1\":\n\n\n1)Iron Sword (150 coins)\n2)Healing potion (50 coins each)\n3)THE PASSWORD FOR TOTAL DOMINATION!!! (10000000000000 coins)\n4)Cocoa puffs (75 coins)\n5)exit" << endl;
	}
	if (sound == true) {
	Beep(800,220);
}
	getline(cin, action);
	if (action == "1" && money < 150 && weapon != 1) {
		cout << "\nYou don't have enough coins to buy this item.\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
		
	}


	if (action == "1" && weapon == 1) {
		system("cls");
		cout << "You already have this item\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
	}

	if (action == "1" && money >= 150 && weapon != 1) {
		cout << "You got the Iron sword!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
		money = money - 150;
		weapon = 1;
	}

	
	
	if (action == "about 1" || action == "About 1" || action == "ABOUT 1") {
		system("cls");
		cout << "The iron sword will increase your strength by 5. That should help you PWN those monsters!\n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("PAUSE");
	}
	if (action == "about 2" || action == "About 2" || action == "ABOUT 2") {
		system("cls");
		cout << "This will fully replenish your health during battle!\n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("PAUSE");
	}
	
	if (action == "about 3" || action == "About 3" || action == "ABOUT 3") {
		system("cls");
		cout << "This is the password to the cheat menu and to authenticate modified savegames.\n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("pause");
	}

	if (action == "about 4" || action == "About 4" || action == "ABOUT 4") {
		system("cls");
		cout << "This will make you COOCOO FOR COCOA PUFFS, allowing you to go so fast, that you will be able to have 3 turns in a row!\n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("pause");
	}
	
	
	if (action == "3") {
		system("cls");
		troll = false;
		cout << "You might want to take a closer look at the price. \n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("pause");
	}
	
	if (action == "2" && money < 50) {
		system("cls");
		cout << "Sorry, you don't have enough coins to buy this item...\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
	}

	if (action == "4" && money < 75) {
		system("cls");
		cout << "Sorry, you don't have enough coins to buy this item...\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
	}


	if (action == "4" && money >= 75) {
		system("cls");
		cout << "Thank you for your purchase!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		money = money - 75;
		if (item1 == "Cocoa Puffs" || item1 == "" || item1 == "0") {
			item1 = "Cocoa Puffs";
			item1has = 1;
			item1type = 2;
			item1a++;
		}
		else if (item2 == "Cocoa Puffs" || item2 == "" || item2 == "0") {
			item2 = "Cocoa Puffs";
			item2type = 2;
			item2has = 1;
			item2a++;
		}
		else if (item3 == "Cocoa Puffs" || item3 == "" || item3 == "0") {
			item3 = "Cocoa Puffs";
			item3type = 2;
			item3has = 1;
			item3a++;
		}
		else if (item4 == "Cocoa Puffs" || item4 == "" || item4 == "0") {
			item4 = "Cocoa Puffs";
			item4type = 2;
			item4has = 1;
			item4a++;
		}
		else if (item5 == "Cocoa Puffs" || item5 == "" || item5 == "0") {
			item5 = "Cocoa Puffs";
			item5type = 2;
			item5has = 1;
			item5a++;
		}

		else {
			cerr << "\n\nAn error occured when completing your purchase. The likely cause of this could be a modified savegame, or an invalid modification in the cheat menu." << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
			Beep(800,220);
			Beep(800,220);
			Beep(800,220);
		}
			system("pause");
			money = money + 75;
			cout << "\nYou will now receive a full refund for your coins. You now have " << money << " coins." << endl << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
		}

		system("pause");
	}
	
	if (action == "2" && money >=50) {
		system("cls");
		cout << "Thank you for your purchase!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		money = money - 50;
		if (item1 == "Healing Potion" || item1 == "" || item1 == "0") {
			item1 = "Healing Potion";
			item1has = 1;
			item1type = 1;
			item1a++;
		}
		else if (item2 == "Healing Potion" || item2 == "" || item2 == "0") {
			item2 = "Healing Potion";
			item2type = 1;
			item2has = 1;
			item2a++;
		}
		else if (item3 == "Healing Potion" || item3 == "" || item3 == "0") {
			item3 = "Healing Potion";
			item3type = 1;
			item3has = 1;
			item3a++;
		}
		else if (item4 == "Healing Potion" || item4 == "" || item4 == "0") {
			item4 = "Healing Potion";
			item4type = 1;
			item4has = 1;
			item4a++;
		}
		else if (item5 == "Healing Potion" || item5 == "" || item5 == "0") {
			item5 = "Healing Potion";
			item5type = 1;
			item5has = 1;
			item5a++;
		}
		
		else {
			cerr << "\n\nAn error has occured when completing your purchase. The likely cause of this could be a modified savegame, or an invalid modification in the cheat menu.\n" << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
			Beep(800,220);
			Beep(800,220);
			Beep(800,220);
		}
			system("pause");
			money = money + 50;
			cout << "\nYou will now get a full refund of your coins. You have " << money << " coins." << endl << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
		}
		
		system("pause");
	}
		
	else if (action != "1" && action != "2" && action != "3" && action != "4" && action != "5" && action != "about 1"  && action != "about 2" && action != "about 3" && action != "about 4")
	{
		cout << "\nInvalid input\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("pause");
		system("cls");
	}	
		
		

}
system("cls");
system("color 07");
return 0;
}





int defaults() {
	herohealth = 5;
	lvl = 1;
	herodef = 2;
	herostrength = 4;
	herofullh = 5;
	sp = 0;
	spfull = 0;
	state = 0;
	levelup = 0;
	xp = 0;
	money = 0;
	save = No_save;
	flee = true;
	item1 = "";
	item2 = "";
	item3 = "";
	item4 = "";
	item5 = "";
	item1has = 0;
	item2has = 0;
	item3has = 0;
	item4has = 0;
	item5has = 0;
	item1type = 0;
	item2type = 0;
	item3type = 0;
	item4type = 0;
	item5type = 0;
	item1a = 0;
	item2a = 0;
	item3a = 0;
	item4a = 0;
	item5a = 0;
	return 0;
	
	
}

int leveluphandler() {
	
	if (battle == 1) {
	cout << "Reward(s): 500 exp\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	xp = xp + 500;
	//rewardcoins = (rand() % 25 + 0);
	//money = money + rewardcoins;
	//if (rewardcoins > 0) {
		//cout << rewardcoins << " coin(s)\n\n" << endl;
	//}


		system("PAUSE"); }
		
		if (battle == 2) {
			cout << "Reward(s): 750 exp\n" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			xp = xp + 750;
		// 	rewardcoins = (rand() % 50 + 0);
		//		money = money + rewardcoins;

			//	if (rewardcoins > 0) {
			//	cout << rewardcoins << " coin(s)\n\n" << endl; 
			//	}
			system("PAUSE");
		}
		
		if (xp >=500 && levelup == 0) {
		levelup++; 
		lvl++;
		statraise = true;
		herofullh = herofullh + 3;
		herostrength = herostrength + 3;
		herodef = herodef + 1;
		spfull = 4;
		cout << "YOU LEVELED UP!!!!!!!!!!!!! \n You can now use magic! Note that the \"nothing\" command, has been moved to the magic moves menu.\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE"); 
		cout << "You unlocked heal! Look for it in the magic menu!\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		system("cls");
		action = "nothing";
		
	
				}
				
			if (xp >=1100 && levelup == 1) {
				lvl++;
				levelup++;
				statraise = true;
				herofullh = herofullh + 3;
				herostrength = herostrength + 3;
				herodef = herodef + 1;
				spfull = spfull + 3;
				cout << "YOU LEVELED UP!!!!!!!!!\nYou learned a new move! Fireball! Look for it in the magic moves menu!\n\n" << endl;
				if (sound == true) {
				Beep(800,220);
				Beep(800,220);
				Beep(800,220);
			}
				system("PAUSE");
				
			}

	

			
			
			while (statraise == true) {
				cout << "Select a stat to raise by 2:\n\n1)Health\n2)defense (will only be raised by 1)\n3)power\n4)sp\n\n" << endl;
				if (sound == true) {
				Beep(800,220);
			}
				cin >> action;
				

				


				if (action == "1") {
					herofullh = herofullh + 2;
					statraise = false;
				}

				else if (action == "2") {
					herodef = herodef + 1;
					statraise = false;
					
				}

				else if (action == "3") {
					herostrength = herostrength + 2;
					statraise = false;
				}

				else if (action == "4") {
					spfull = spfull + 2;
					statraise = false;
					
				}

				else {
					system("cls");
					cout << "Invalid input\n\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
				}

			}
	statraise = false;				
	return 0; 
}

int battleend() {
	system("cls");
	if(herohealth <= 0) {
		exit(0);
	}
	system("color f0");
	cout << "congratulations! You beat " << monstername << "\n*****************************************\nSTATS:\n\n" << endl; 
		system("color 07");
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE"); 

	

	if(monsterhealth > 0) {
		cout << "No experience has been earned because you fled. Try not to flee next time because you may not be strong enough for the next enemy. If you flee you cannot earn experience to level up. Good luck!" << endl; 
		if (sound == true) {
		Beep(800,220);
	}
		system("PAUSE");
		
	}
	
	if(monsterhealth <=0) {
		battle++;
		leveluphandler();
						
		cout << "Here are your stats:\nlvl " << lvl << "\n\n Health: " << herofullh << "\n defense: " << herodef << "\n power: " << herostrength << "\n sp: " << spfull << "\nExperience: " << xp << endl << endl << endl;
		system("PAUSE"); 
		return 0;
		
	}
	return 0;
}















int cheatcommandmenu() {
	system("color b0");
	system("cls");
	cout << "Cheat Menu v1.4 (UNSTABLE/GLITCHY, for testing purposes only)\n\nWhen editing stats, DO NOT type in any letters.\n\n" << endl;
	cout << "\n\n\nENTER ADMINISTRATOR PASSWORD OR TYPE \"EXIT\":\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	cin >> cheatcommand;
	if (cheatcommand == "exit") {
		system("color 07");
		system("cls");
		return 0;
	}

	while (cheatcommand != "password") {
		cout << "\nah ah ah! You didn't say PLEASE!!':\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		cin >> cheatcommand;
		if (cheatcommand == "exit")  {
			system("color 07");
			system("cls");
			return 0;
		}
	}

	while (cheatcommand != "9") {
		system("cls");
		cout << "\nPlease input a number:\n\n1)change player's health\n2)change the player's power\n3)change the player's defense\n4)change the player''s level\n5)cheat menu\n6)change the player's sp\n7)Change how many coins you have\n8)Go to a certain part of the game\n9)exit" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> cheatcommand;


		if (cheatcommand == "1") {
			system("cls");
			cout << "Please input a number for the amount of health" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> herofullh;
			herohealth = herofullh;
		}

		if (cheatcommand == "2") {
			system("cls");
			cout << "Please input a number for the player's power" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> herostrength;
		}
		if (cheatcommand == "3") {
			system("cls");
			cout << "Please input the player's defense" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> herodef;
		}
		if (cheatcommand == "4") {
			system("cls");
			cout << "Please enter the player's new level" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> lvl;
			levelup = lvl - 1;
		}
		if (cheatcommand == "5") {
			system("cls");
			cout << "Input a number to toggle cheats:\n\n\n1)invincibility: " << cheatinvincibility << "\n2)Two turns in a row: " << twoturnsinrow << "\n3)Enemies always do nothing: " << monsterdoesnothing << "\n4)exit" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> cheatcommand;

			if (cheatcommand == "1") {
				system("cls");
				if (cheatinvincibility == "off") {
					cheatinvincibility = "on";
					cout << "Invincibility on\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
					system("PAUSE");
					system("cls");
				}

				else if (cheatinvincibility == "on") {
					cheatinvincibility = "off";
					cout << "Invincibility off\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
					system("PAUSE");
					system("cls");


				}

			}

			if (cheatcommand == "2") {
				system("cls");
				if (twoturnsinrow == "off") {
					twoturnsinrow = "on";
					cout << "Two turns in a row on\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
					system("PAUSE");
					system("cls");
				}

				else if (twoturnsinrow == "on") {
					twoturnsinrow = "off";
					cout << "Two turns in a row off\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
					system("PAUSE");
					system("cls");


				}

			}

			if (cheatcommand == "3") {
				system("cls");
				if (monsterdoesnothing == "off") {
					monsterdoesnothing = "on";
					cout << "Enemy always does nothing on\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
					system("PAUSE");
					system("cls");
				}

				else if (monsterdoesnothing == "on") {
					monsterdoesnothing = "off";
					cout << "Enemy always does nothing off\n" << endl;
					if (sound == true) {
					Beep(800,220);
				}
					system("PAUSE");
					system("cls");


				}

			}
			if (cheatcommand == "4") {
				continue;
			}
		}

		if (cheatcommand == "6") {
			system("cls");
			cout << "Please input a number for the player's sp:" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> spfull;
		}

		if (cheatcommand == "7") {
			system("cls");
			cout << "Bring on the cashflow! Input a number for how many coins you want!" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> money;
			
		}

		if (cheatcommand == "8") {
			system("cls");
			cout << "Enter number for variable \"state\" (this will cause errors if an invalid number is entered)" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> state;
		}




		if (cheatcommand == "9" && herohealth != 5 | herostrength != 4 | herodef != 2 | lvl != 1 | herofullh != 5 | money != 0 | state != 0 | cheatinvincibility != "off" | twoturnsinrow != "off" | monsterdoesnothing != "off") {
			system("cls");
			cout << "\nOkay, these are your new stats:\n\n level: " << lvl << "\nHealth: " << herohealth << "\nPower: " << herostrength << "\nDefense: " << herodef << "\nsp: " << spfull << "\nCoins: " << money << "\nState: " << state << endl;
			cout << "\n\n\nThese are your current cheat settings:\n\ninvincibility: " << cheatinvincibility << "\nTwo turns in a row: " << twoturnsinrow << "\nEnemies always do nothing: " << monsterdoesnothing << endl;
			cout << "\nDo you wish to proceed? (y/n)" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> cheatcommand;
			

			if (cheatcommand == "y" || cheatcommand == "Y") {
				break;
			}
			else if (cheatcommand == "n" || cheatcommand == "N") {
				continue;
			}

		}
	}
	system("cls");
	system("color 07");
	return 0;
}





int mainmenu() {

	while (action != "1" || action != "2" || action != "3" || action != "4") {
		system("cls");
		if (sound == true) {
			Beep(800, 220);
		}
		if (save != Save_available) {
			cout << "Main menu:\n\nInput a number and press enter:\n\n\n1)Start/resume game\n2)Delete savegame\n3)Cheat menu\n4)Settings\n5)Exit\n" << endl;
		}
		if (save == Save_available) {
			cout << "Main menu:\n\nInput a number and press enter:\n\n\n1)Start/resume game\n2)Delete savegame\n3)Cheat menu\n4)Settings\n5)Save game\n6)Exit" << endl;
		}
		cin >> action;





		if (action == "1") {
			system("cls");
			return 0;
		}

		else if (action == "2") {
			system("cls");
			cout << "\n\nThis will erase your progress, proceed? y/n (Type in \"y\" or \"n\" and press enter)\n\n" << endl;
			if (sound == true) {
				Beep(800, 220);
				Beep(800, 220);
				Beep(800, 220);
			}
			cin >> action;

			if (action == "y" || action == "Y") {
				if (remove("gamesave.dat") != 0) {
					cerr << "Error deleting gamesave.dat\n" << endl;
					if (sound == true) {

						Beep(800, 220);
						Beep(800, 220);
						Beep(800, 220);
						Beep(800, 220);
						Beep(800, 220);
						Beep(800, 220);
						Beep(800, 220);
						Beep(800, 220);
					}
					system("PAUSE");
					system("cls");
				}
				else {
					cout << "File successfully deleted!" << endl;
					if (sound == true) {

						Beep(800, 220);
					}
					system("PAUSE");
					defaults();
					system("cls");
				}
			}
		}
		else if (action == "3") {
			cheatcommandmenu();
		}

		else if (action == "5" && save != Save_available) {
			exit(0);
		}

		else if (action == "6" && save == Save_available) {
			exit(0);
		}

		else if (action == "5" && save == Save_available) {
			savepending = true;
			return 0;
			system("cls");
			
		}

		else if (action == "4") {
			while (action != "3") {
				system("cls");
				cout << "\nInput a number to toggle the settings:\n\n\n1)Toggle sound: ";
				if (sound == true) {
					cout << "on" << endl;
				}
				else if (sound == false) {
					cout << "off" << endl;
				}
				else {
					cout << sound << endl;
				}
				cout << "2)Save automatically: ";
				if (save == Auto) {
					cout << "on" << endl;
				}
				else if (save == Save_available) {
					cout << "off" << endl;
				}
				else if (save == No_auth) {
					cout << "You cannot change this option because a modified savegame was detected" << endl;
				}
				else if (save == No_save) {
					cout << "You cannot change this option because no savegame is loaded yet" << endl;
				}
				else {
					cout << save << endl;
				}
				cout << "3)exit" << endl;

				cin >> action;

				if (action == "1" && sound == true) {
					system("cls");
					sound = false;
					cout << "Beeping sounds have been turned off\n" << endl;
					system("pause");
				}
				else if (action == "1" && sound == false) {
					system("cls");
					sound = true;
					cout << "Beeping sounds have been turned on\n" << endl;
					system("pause");
				}

				else if (action == "2" && save == No_save) {
					system("cls");
					cout << "You cannot change this option because no savegame is loaded yet\n" << endl;
					system("pause");
				}
				else if (action == "2" && save == No_auth) {
					system("cls");
					cout << "You cannot change this option because a modified savegame was detected\n" << endl;
					system("pause");
				}

				else if (action == "2" && save == Auto) {
					system("cls");
					save = Save_available;
					cout << "Automatic saving off. From now on, you will need to go to the main menu to save your game.\n" << endl;
					system("pause");
				}
				else if (action == "2" && save == Save_available) {
					system("cls");
					cout << "Your game will now be saved automatically.\n" << endl;
					system("pause");
				}

				else if (action == "3") {
					NULL;
				}

				else {
					cout << "\n\nInvalid input\n\n" << endl;
					system("PAUSE");
				}
			}
		}



		else {
			cout << "Invalid Input\n" << endl;
			if (sound == true) {
				Beep(800, 220);
				Beep(800, 220);
			}
			system("PAUSE");
			system("cls");
		}


	}
	system("cls");
	return 0;
}






int noauth() {
	system("color c0");
	system("cls");
	if (wrongpass < 4) {
		cout << "COMPUTERDOOM has detected that the savegame is modified. This could potentially result in glitches throughout the game (and the possibility that you cheated). To continue anyway, enter the password:" << endl;
		if (sound == true) {
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
		}
	password:
		cin >> action;
	}

	if (action != "password") { wrongpass++; }


	while (action != "password") {
		save = No_auth;
		system("cls");
		cout << "ACCESS DENIED! Your savegame will now be deleted, unless you want to poke around for more ways that I'm stupid! Here are your options:\n\n\n1)I'm gonna keep being a wiseguy so I can try to save my savegame\n2)Damn, I'm busted, just delete my savegame\n3)I'm the creator of the game, let me try again. If I'm not, I'm pretty sure I can take a crack at it!" << endl;
		if (sound == true) {
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
		}
		cin >> action;
		if (action == "1") { mainmenu(); }
		else if (action == "2") {
			if (remove("gamesave.dat") != 0) {
				cerr << "Error deleting gamesave.dat\n" << endl;
				if (sound == true) {
					Beep(800, 220);
					Beep(800, 220);
					Beep(800, 220);
					Beep(800, 220);
					Beep(800, 220);
					Beep(800, 220);
					Beep(800, 220);
				}
				system("PAUSE");
				system("cls");
				return 0;
			}
			else {
				cout << "File successfully deleted!\n" << endl;
				if (sound == true) {
					Beep(800, 220);
				}
				system("PAUSE");
				system("cls");
				save = No_save;
				defaults();
				system("color 07");
				return 0;
			}
		}

		else if (action == "3") {
			if (wrongpass > 3) {
				cout << "You've already attempted the password too many times!" << endl;
				if (sound == true) {
					Beep(800, 220);
					Beep(800, 220);
					Beep(800, 220);
				}
				system("PAUSE");
				return 0;
			}
			system("cls");
			cout << "Enter the password" << endl;
			if (sound == true) {
				Beep(800, 220);
			}
			goto password;

		}

		else { system("cls"); cout << "Invalid Input\n\n\n"; system("PAUSE"); system("cls"); }

	}

	if (action == "password") {
		auth = true;
		system("cls");
		system("color 07");
	}
	return 0;
}





void integritycheck()  {
	system("cls");
	cout << "Verifying integrity of file..." << endl;
		Sleep(333);
		if (lvl > 3 | herofullh > 15 | herostrength > 14 | herodef > 6 | spfull > 11 | state > 3 | money > 500 | weapon > 1 | item1has > 1 | item2has > 1 | item3has > 0 | item4has > 0 | item5has > 0 | item1type > 2 | item2type > 2 | item3type > 2 | item4type > 2 | item5type > 2) {
		if (auth == true) {
			cout << "\nModification authenticated, skipping....." << endl;
			Sleep(333);
		}
		
		if (auth == false) {
		noauth();
	}
	}
	Sleep(333);
	
	if (item1 == "Healing Potion" & item1type != 1 || item1 == "Cocoa Puffs" & item1type != 2 || item2 == "Healing Potion" & item2type != 1 || item2 == "Cocoa Puffs" & item2type != 2) {
		if (auth == true) {
			cout << "\nModification authenticated, skipping........." << endl;
				Sleep(333);
		}
		if (auth == false) {
			noauth();
		}
	} 
	Sleep(333);
	if (item1a > 0 & item1has == 0 || item2a > 0 & item2has == 0 || item1has == 1 & item1a == 0 || item2has == 1 & item2a == 0) {
		if (auth == true) {
			cout << "Modification authenticated, skipping.........." << endl;
			Sleep(333);
		}
		if (auth == false) {


			noauth();
		}
	}

system("cls");
}














int gamesavehandler() {

	if (save == Auto || save == Save_available) {
		ofstream writesave;
		writesave.open("gamesave.dat");
		switch (itemmenu)  {
		case 1:
			writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl << weapon << item1 << endl << item1a << endl << item1has << endl << item1type << endl;
			break;
		case 2:
			writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl << weapon << endl << item1 << endl << item1a << endl << item1has << endl << item1type << endl << item2 << endl << item2a << endl << item2has << endl << item2type << endl;
			break;
		case 3:
			writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl << weapon << endl << item1 << endl << item1a << endl << item1has << endl << item1type << endl << item2 << endl << item2a << endl << item2has << endl << item2type << endl << item3 << endl << item3a << endl << item3has << endl << item3type << endl;
			break;
		case 4:
			writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl << weapon << item1 << endl << item1a << endl << item1has << endl << item1type << endl << item2 << endl << item2a << endl << item2has << endl << item2type << endl << item3 << endl << item3a << endl << item3has << endl << item3type << endl << item4 << endl << item4a << endl << item4has << endl << item4type << endl;
			break;
		case 5:
			writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl << weapon << endl << item1 << " " << endl << item1a << endl << item1has << endl << item1type << endl << item2 << endl << item2a << endl << item2has << endl << item2type << endl << item3 << endl << item3a << endl << item3has << endl << item3type << endl << item4 << endl << item4a << endl << item4has << endl << item4type << endl << item5 << endl << item5a << endl << item5has << endl << item5type << endl;
			break;
		default:

			writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl << weapon << endl;
			break;
		}
		writesave.close();
		system("cls");
		cout << "Game saved!" << endl;
		Sleep(1500);
		system("cls");
		return 0;
	}

	cout << "Loading gamesave....\n\n";
	ifstream readsave;
	readsave.open("gamesave.dat");

	if (readsave.fail()) {
		while (true) {
			if (sound == true) {
				Beep(800, 220);
				Beep(800, 220);
			}
			cerr << "Could not read from save file. It may be corrupted, or doesn't exist.\n\nWould you like to create a gamesave now? (this creates \"gamesave.dat\" in the location of the game) y/n (type in \"y\" or \"n\" and press enter)\n\n" << endl;
			cin >> action;




			if (action == "y" || action == "Y") {
				system("cls");
				cout << "Creating save data..." << endl;
				readsave.close();
				ofstream writesave;
				writesave.open("gamesave.dat");
				writesave << lvl << endl << sp << endl << spfull << endl << herohealth << endl << herodef << endl << herostrength << endl << herofullh << endl << xp << endl << levelup << endl << heroname << endl << state << endl << money << endl;
				if (sound == true) {
					Beep(800, 220);
				}
				cout << "\n\nThe save data was written" << endl;
				system("PAUSE");
				system("cls");
				writesave.close();
				save = Auto;
				system("cls");
				return 0;

			}

			if (action == "n" || action == "N") {
				save = No_save;
				system("cls");
				return 0;
			}

			if (action != "y" | action != "Y" | action != "n" | action != "N") {
				cout << "Invalid input\n" << endl;
				if (sound == true) {
					Beep(800, 220);
					Beep(800, 220);
				}
				system("pause");
				system("cls");
				

			}
		}
		}
	readsave >> lvl >> sp >> spfull >> herohealth >> herodef >> herostrength >> herofullh >> xp >> levelup >> heroname >> state >> money >> weapon >> item1 >> item1read >> item1a >> item1has >> item1type >> item2 >> item2read >> item2a >> item2has >> item2type >> item3 >> item3read >> item3a >> item3has >> item3type >> item4 >> item4read >> item4a >> item4has >> item4type >> item5 >> item5read >> item5a >> item5has >> item5type;
	system("cls");
	cout << "The following savegame was found:\n\n" << heroname << " level " << lvl << "\n\nHealth: " << herofullh << "\nPower: " << herostrength << "\nDefense: " << herodef << "\nsp: " << spfull << "\nExperience: " << xp << "\nCoins: " << money << endl << endl << "\nInventory;\n\n" << endl;
	if (item1has == 1) {
		stringstream saveitem1;
		saveitem1 << item1 << " " << item1read;
		item1 = saveitem1.str();
		item1read = "";
		cout << item1 << " (" << item1a << ")" << endl;

	}
	if (item2has == 1) {
		stringstream saveitem2;
		saveitem2 << item2 << " " << item2read;
		item2 = saveitem2.str();
		item2read = "";
		cout << item2 << " (" << item2a << ")" << endl;
	}
	if (item3has == 1) {
		stringstream saveitem3;
		saveitem3 << item3 << " " << item3read;
		item3 = saveitem3.str();
		item3read = "";
		cout << item3 << " (" << item3a << ")" << endl;
	}
	if (item4has == 1) {
		stringstream saveitem4;
		saveitem4 << item4 << " " << item4read;
		item4 = saveitem4.str();
		item4read = "";
		cout << item4 << " (" << item4a << ")" << endl;
	}
	if (item5has == 1) {
		stringstream saveitem5;
		saveitem5 << item5 << " " << item5read;
		item5 = saveitem5.str();
		item5read = "";
		cout << item5 << " (" << item5a << ")" << endl;
	}

	if (weapon == 1) {
		cout << "\nIron Sword\n\n" << endl;
	}
	if (weapon == 2) {
		cout << "\nBronze Sword\n\n" << endl;
	}

	system("PAUSE");
	save = Auto;
	readsave.close();

integritycheck();



	system("cls");
	readsave.close();


	return 0;
}

























int midwaymenu() {
	if (storestat != true) {
		cout << "*************************************************\n\n What would you like to do next?:\n1)Fight next monster\n2)Go to main menu\n3)Quit (your progress will be saved if a savegame was previously loaded)\n\n" << endl;
	}
	else if (storestat == true) {
		cout << "*************************************************\n\n What would you like to do next?:\n1)Fight next monster\n2)Go to main menu\n3)Go to the store\n4)Quit (your progress will be saved if a savegame was previously loaded)\n\n" << endl;
	}
	cin >> action;

	if (action == "1") {
		return 0;
	}

	else if (action == "2") {
	do {
		savepending == false;
		mainmenu();
		if (savepending == true) {
			gamesavehandler();
		}
	}
	while (savepending == true);
	}

	else if (action == "3" && storestat == false) {
		system("cls");
		cout << "Goodbye!" << endl;
		if (sound == true) {
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
			Beep(800, 220);
		}
		_getch();
		exit(0);
}
	
	else if (action == "3" && storestat == true) {
		itemstore();
	}

	else {
		system("cls");
		cout << "Invalid input\n\n" << endl;
		if (sound == true) {
			Beep(800, 220);
			Beep(800, 220);
		}
		midwaymenu();

	}
	return 0;
}




int sphandler() {
	if (lvl == 2) {
		cout << "You have " << sp << " sp\n\n" << specialattackmenu1 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;
	}

	if (lvl > 2) {
		cout << "You have " << sp << " sp\n\n" << specialattackmenu2 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		cin >> action;
	}
		if (action == "3" && sp >=2) {
			
			herohealth = herofullh;
			sp = sp - 2;
			system("color f0");
			cout << heroname << " is healing!\n\n" << heroname << " now has " << herohealth << " health!\n\n" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			
		}
		
		else if (action == "3" && sp <2) {
			cout << heroname << " is attempting to heal, but failed because there is insufficient sp!\n\n" << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
		}
		
		else if (action == "1") {
		return 0; }
		
		else if (action == "2") {
			cout << heroname << " did nothing\n" << endl;
			if (sound == true) {
			Beep(800,220);
		}
	}
		else if (action == "4" && sp >= 4 && lvl > 2) {
			damage = damage * 2;
			sp = sp - 4;
			monsterhealth = monsterhealth - damage;
			system("color c");
			cout << heroname << " is using a fireball!\n\n" << heroname << " did " << damage << " damage\n\n" << monstername << "  now has " << monsterhealth << " left\n\n" << endl;
			if (sound == true) {
			Beep(800,220);
}
		}

		else if (action == "4" && lvl > 2 && sp < 4) {
			cout << heroname << " is attempting to use a fireball, but failed because there is insufficient sp!\n\n" << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
		}
	
	else {
		cout << "\n\nInvalid Input\n\n" << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		system("cls");
		sphandler();
	}

	
		


	return 0;
}


































void fightbasicmonster1() {
	enemydamage = monsterstrength/herodef;
	damage = herostrength/monsterdef;
	turncheat = 1;
	while(herohealth > 0 && monsterhealth > 0) {
		enemydamage = monsterstrength/herodef;

		if (cocoapuffs > 0) {
			cout << "\n\nCoocoo for Cocoa Puffs for " << cocoapuffs << " extra turn(s); \n\n" << endl;
				
		}
	if (lvl == 1 && itemmenu > 0) {
			cout << heroname << ", what will you do?\n" << actionmenu4 << endl;
			if (sound == true) {
			Beep(800,220);
		}
		}
		 
		 
		 else if (lvl == 1) {
			
		cout << heroname << ", what will you do?\n" << actionmenu1 << endl;
		if (sound == true) {
		Beep(800,220);
	}
		 }

	
		
		else if (itemmenu > 0 && lvl > 1) {
			cout << heroname << ", what will you do?\n" << actionmenu3 << endl;
			if (sound == true) {
			Beep(800,220);
		}
		}
		
		
		else if  (lvl >1) {
			cout << heroname << ", what will you do?\n" << actionmenu2 << endl;
			if (sound == true) {
			Beep(800,220);
		}
		}
		
		cin >> action;
		system("cls");
		
		if (action == "3") {
						
			cout << "Are you sure you want to flee? If you do, you will gain no experience! Do you still want to continue? (y/n)" << endl;
			if (sound == true) {
			Beep(800,220);
		}
			cin >> action;
			
			if (action == "y" && flee == true) {
				cout << heroname << " is fleeing!\n\n The battle has ended.\n" << endl;
				if (sound == true) {
				Beep(800,220);
				Beep(800,220);
			}
				system("PAUSE");
				break;
			}
			
			if (action == "y" && flee == false) {
				cout << "Cannot flee from this battle :(\n" << endl;
				system("PAUSE");
				continue;
			}
			
			else if(action == "n") {
					continue;
			}
			
			else {
				cout << "invalid input\n\n" << endl;
				if (sound == true) {
				Beep(800,220);
			}
				continue;
			}
			
			
		}
		
		if(action == "1") {
		
			monsterhealth =  monsterhealth - damage; 
			
			if (monsterhealth >= 0) {
			cout << "You did " << damage << "!\n" << monstername << " now has " << monsterhealth << " health left\n" << endl;
			}
			else if (monsterhealth < 0) {
				cout << "You did " << damage << "!\n" << monstername << " now has 0 health left\n" << endl;
			}
				
			system("color fc");
			if (sound == true) {
			Beep(800,220);
		}
			if(monsterhealth <=0) {
				break;
			}
		}
		
		if(action == "2") {
			enemydamage = enemydamage/2;
			system("color 9");
			cout << heroname << " is defending!" << endl;
			if (sound == true) {
			Beep(800,220);
		}
		}
		
		if(action == "4" && lvl == 1) {
			
		cout << heroname << " did nothing!\n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("color 07"); }
		
		
		if(action == "5") {
			cout << "\n************************************************************\n" << endl; 
			if (sound == true) {
			Beep(800,220);
		}
			cout << "STATS: \n\n" << heroname << " level " << lvl << "\n\nHealth: " << herohealth << "\nPower : " << herostrength << "\nDefense : " << herodef << "\nsp : " << sp << "\nExperience : " << xp << "\nCoins : " << money << endl << endl << "\nInventory; \n\n" << endl;
			if (item1has == 1) {
				cout << item1 << " (" << item1a << ")" << endl;
			}
			if (item2has == 1) {
				cout << item2 << " (" << item2a << ")" << endl;
			}
			if (item3has == 1) {
				cout << item3 << " (" << item3a << ")" << endl;
			}
			if (item4has == 1) {
				cout << item4 << " (" << item4a << ")" << endl;
			}
			if (item5has == 1) {
				cout << item5 << " (" << item5a << ")" << endl;
			}

			if (weapon == 1) {
				cout << "\nIron Sword (+5 power)" << endl;
			}
			if (weapon == 2) {
				cout << "\nBronze Sword (+10 power)" << endl;
			}
			cout << "\n\n" << endl;
			system("PAUSE");
			continue;
		}
		
		if (action == "4" && lvl > 1) {
			sphandler();
			if (action == "1") {
				continue;
			}
			
		}
	 if (action == "6" && itemmenu > 0) {
				itemhandler();
			}
		
		
		if (action != "1" && action != "2" && action != "3" && action != "4" && action != "5" && itemmenu == 0)
		{
				system("cls");
				cout << "\ninvalid Input\n" << endl;
				if (sound == true) {
				Beep(800,220);
			}
				continue;
			}
	
	
		if (action != "1" && action != "2" && action != "3" && action != "4" && action != "5" && action !=" 6" && itemmenu > 0)
		{
				system("cls");
				cout << "Invalid Input\n" << endl;
				if (sound == true) {
				Beep(800,220);
			}
				continue;
			}

		if (repeat == true) {
			repeat = false;
			continue;
		}
	if (twoturnsinrow == "on" && turncheat == 1) {
		turncheat = turncheat - 1;
		continue;
	}	
		
		if (cocoapuffs > 0) {
			cocoapuffs = cocoapuffs - 1;
			continue;
		}
		
		
			srand((unsigned)time(0)); 
    		com = (rand()%6 + 1);
    	
    		turncheat = 1;
			damage = herostrength/monsterdef;
			
			if(monsterheal == 0 || monsterhealth == monsterfullh) {
    			com = (rand() %5 + 1);
    		}
    		
    		if (monsterdoesnothing == "on") {
    			com = 3;
    		}
    		
    		if(com == 1 || com == 2 || com == 3) {
    		
    		if (cheatinvincibility == "off") {
    		
    			herohealth = herohealth - enemydamage; }
    			if (cheatinvincibility == "on") {enemydamage = 0;  	}
				if (herohealth >= 0) {
    			cout << monstername << " is attacking\n " << monstername << " did " << enemydamage << "!\n You now have " << herohealth << " left" << endl;
				}
				else if (herohealth < 0) {
					cout << monstername << " is attacking\n" << monstername << " did " << enemydamage << "!\n You now have 0 left" << endl;
				}
    			system("color c");
    		
			
			}
    		
    		if(com == 4) {
    			damage = damage/2;
    			cout << monstername << " is defending\n" << endl;		
    		}
    		if(com == 5) {
    			
    			cout << monstername << " did nothing\n" << endl;
    		}
    		
    		if(com == 6 && monsterheal >0 && monsterhealth < monsterfullh) {
    			
    			monsterhealth = monsterfullh;
    			monsterheal = monsterheal - 1;
    			cout << monstername << " is healing!\n" << monstername << " now has " << monsterhealth << "\n" << endl;
    			system("color f0");
    		}
    		
    	}
	
		

	if(herohealth <=0) {
		system("color c0");
		cout << "You ran out of health!\n**********************************\n GAME OVER....\n**********************************************\n Please input anything or just close the game because you lost bro!" << endl; 
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		system("PAUSE");
		
	}
}














int tutorial() {
	system("cls");
	while (true) {
		system("cls");
		cout << "This game automatically saves all of your stats and progress. If you see a file called \"gamesave.dat\", this is your gamesave file. You probably won't be able to change the savegame, but don't try to cheat because I WILL FIND OUT! This program tracks where you live!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("PAUSE");
		cout << "\nLOL just kidding, I don't know where you live, but this game can still detect a modified save file so DON'T THINK I'M STUPID JUST 'CAUSE I'M A COMPUTER, THAT'S RACIST!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("pause");
		system("cls");
		if (sound == true) {
		Beep(800,220);
	}
		cout << "When you get an action menu, input only the number, not the word. For example:\n**********************************************************************************\n You encountered practice!\n" << heroname << ",what will you do?" << endl;
		cout << actionmenu1 << endl;
		cin >> action;
		if (action == "1" || action == "2" || action == "3" || action == "4" || action == "5") {
			cout << "Very good\n\n" << endl;
		}
		
		else {
			cout << "Try again. Type in a number from the list and press enter\n\n" << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
			system("PAUSE");
			continue;
			
		}
		if (sound == true) {
		Beep(800,220);
	}
		cout << "Occasionally, you will be asked yes or no questions (the way you were asked to do a tuturial) remember, do NOT type \"yes\" or \"no\". All yes or no questions will have \"y/n\" at the end. \nThis is the end of the tutorial. Would you like to repeat it? y/n" << endl;
		cin >> action;
		
		if (action == "n" || action == "N") {
			break;
			system("cls");
		}
	}
	cout << "You are ready!\n********************************" << endl; Beep(800,220); system("PAUSE"); system("cls"); return 0;
}































































































int main() {
	
	system("title COMPUTERDOOM v1.0 beta 4");
	int alert = MessageBox(NULL, "Please note that this is NOT the latest version of COMPUTERDOOM! To get the latest version (currently in testing), please contact me. Do you want to proceed and play this outdated and possibly buggy version of COMPUTERDOOM? ",
	"This is an old version of COMPUTERDOOM!", MB_ICONASTERISK | MB_YESNO);
	
	if (alert == IDNO) 
		exit(0);
	start:	
	mainmenu();
	if (savepending == true) {
		gamesavehandler();
		savepending = false;
		goto start;
	}
	gamesavehandler();
	if (save == No_auth) { goto start; }

	if (state == 0) {
		NULL;
	}

	else if (state == 1) {
		goto state1;
	}
	else if (state == 2) {
		goto state2;
	}
	else if (state == 3) {
		goto state3;
	}
	
	else {
		system("cls");
		cerr << "An error has occurred while trying to configure checkpoints.\n\nERROR: The variable \"state\" has an invalid value of " << state << ". The variable must either be set to a valid value or reset back to 0. This is either because of a corrupt savegame or an invalid input in the cheat menu." << endl;
		if (sound == true) {
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
		Beep(800,220);
	}
		_getch();
		goto start;
	}
	if (sound == true) {
	Beep(800, 220);
}
	cout << "Welcome brave hero! The computer world is in danger and has been invaded by many threats! You are the chosen one who can help us. Good luck!\n\n\n\n\n" << endl;
	cout << "What is your name hero?" << endl;
	cin.ignore(256, '\n');
		getline(cin,heroname);
		
	if (save == Auto) {
		gamesavehandler();
	}
	
	cout <<"\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	cout << "These are your current stats:\n\n" << heroname << ": \n1vl " << lvl << "\nhealth: " << herohealth <<"\n defense: " << herodef << "\n power: " << herostrength << "\n*******************************" << endl;
	system("PAUSE");
	action = "nothing";
	while (action != "y" && action != "Y" && action != "n" && action != "N") {
	cout << "Go through some important info about the game? y/n (type in \"y\" or \"n\" and press enter)\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	cin >> action;
	if(action == "y" || action == "Y") {
		tutorial();
		}
		
		else if (action != "y" && action != "Y" && action != "n" && action != "N") {
			cout << "Invalid Input\n\n" << endl;
			if (sound == true) {
			Beep(800,220);
			Beep(800,220);
		}
		} }
	
	monstername = "POPUPAD";
	action = "nothing";
	monsterfullh = 6;
	monsterdef = 2;
	monsterstrength = 4;
	monsterheal = 1;
	monsterhealth = monsterfullh;
	herohealth = herofullh;
	sp = spfull;
	
	system("cls");

	cout << "You encountered a POPUPAD!\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	system("PAUSE");

	chkinventorysob();
	fightbasicmonster1();
	chkinventoryeob();
	if(herohealth <= 0) {
		return 0;
	}
	system("cls");
	system("color f0");
	cout << "congratgulations! You've won your first battle\n*****************************************\nSTATS:\n\n" << endl; 
	if (sound == true) {
	Beep(800,220);
	} 
	system("PAUSE"); 
	system("color 07");
	
	if(monsterhealth > 0) {
		cout << "No experience has been earned because you fled. Try not to flee next time because you may not be strong enough for the next enemy. If you flee you cannot earn experience to level up. Good luck!" << endl; 
		if (sound == true) {
		Beep(800,220);
	}
		system("PAUSE");
	}
	
	if(monsterhealth <=0) {
		battle++;
		leveluphandler();
						
		cout << "Here are your stats:\nlvl " << lvl << "\n\n Health: " << herofullh << "\n defense: " << herodef << "\n power: " << herostrength << "\n sp: " << spfull << "\nExperience: " << xp << endl << endl << endl;
		system("PAUSE"); 
		
	}
	state = 1;
	
	if (save == Auto) {
		gamesavehandler();
	}

	state1:
	
	midwaymenu();
	
	action == "nothing";
	monsterfullh = 11;
	monsterdef = 3;
	monsterstrength = 8;
	monsterheal = 3;
	monsterhealth = monsterfullh;
	herohealth = herofullh;
	sp = spfull;
	monstername = "EXCEPTION";
	cout << "You encountered an EXCEPTION" << endl;
	Beep(800,220);
	chkinventorysob();
	fightbasicmonster1(); 
	chkinventoryeob();
	
	battleend();
	state = 2;
	if (save == Auto) {
		gamesavehandler();
	}
	state2:
	system("cls");
	cout << "Careful! The next enemy will be way too difficult for you to beat. If only........ what the-?\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	system("PAUSE");
	cout << "\n\n\nLook! " << monstername << " dropped about 100 coins. If only there was a place where we could buy something to help us. Look over there! A shop!\n\n" << endl;
	if (sound == true) {
	Beep(800,220);
}
	system("pause");
	cout << "\nYou got 100 coins!\n" << endl;
	if (sound == true) {
	Beep(800,220);
	Beep(800,220);
	Beep(800,220);
}
	system("PAUSE");
	money = money + 100;
		itemstore();
		itemmenuparse();
		state = 3;
		if (save == Auto) {
			gamesavehandler();
		}
		state3:
		midwaymenu();
		
		
		monstername = "BSoD";
		monsterhealth = 16;
		monsterfullh = 16;
		monsterstrength = 15;
		monsterdef = 4;
		monsterheal = 5;
		herohealth = herofullh;
		sp = spfull;
		flee = false;
		system("cls");
		cout << "You encountered a BSoD!\n" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		system("PAUSE");
		chkinventorysob();
		fightbasicmonster1();
		chkinventoryeob();
		battleend();
		system("cls");
		state = 0;
		if (save == Auto) {
			gamesavehandler(); 
		}
		cout << "to be continued....\n\n\nYou can play the game from the beginning with your new stats, items, and magic just for fun!" << endl;
		if (sound == true) {
		Beep(800,220);
	}
		_getch();
} 
