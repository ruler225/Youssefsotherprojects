#include<iostream>
#include<string>
#include <Windows.h>

using namespace std;

string action;
bool unknown = false;

int software() {
	return 0;
}

int hardware() {
	return 0;
}









int main() {
	cout << "\"Help! My computer's broke!\" Hush now, no longer will you say that, because I'm here to help you fix the problem! Now, what kind of problem are we dealing with here?" << endl;
	cout << "\nInput the number corresponding with the option you want:\n" << endl;
	cout << "1)software issue\n2)Hardware issue\n3)I don't know!" << endl;
	cin >> action;

	if (action == "1")
		software();

	else if (action == "2")
		hardware();

	else if (action == "3") {
		system("cls");

		cout << "Software refers to the actual things that are installed on the computer such as programs or operating system. A software issue means that because of an incorrect setting, configuration, or simply because of a glitch, the computer doesn't function properly.\n\n" << endl;

		cout << "Hardware refers to the actual components of the computer, such as the screen, keyboard, mouse, cd drive, usb ports and so on. A hardware issue means that a component (whether internal or external)\n" << endl;
		cout << "\1)Software\n2)Hardware\n3)I still don't know" << endl;
		cin >> action;
		
		if (action == "1") {
			system("cls");
			software();
		}
		else if (action == "2") {
			system("cls");
			hardware();
		}
	
		else {
			system("cls");
			cout << "Okay, lets start with software then.\n" << endl;
			system("pause");
			unknown = true;
			software();

		}
	}
}