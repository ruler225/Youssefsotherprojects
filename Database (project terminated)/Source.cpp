#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int column;
string action;
string column1;
string column2;
string column3;
string column4;
string item;



int main() {
	cout << "Hello, this program will help you make a simple database in the form of a plain text document (txt file) without the hassle or complications of programs like Microsoft Excel. The text file will be stored in the location of where you are executing the program. To begin, ";
	system("pause");
	system("cls");
	ifstream verify;
	verify.open("database.txt");

	if (!verify.fail()) {
		while (true) {
			cout << "There is already an existing file. Would you like to continue or erase the file?\n\nInput a number corresponding with the option you want and press enter:\n\n1)continue\n2)start over, erase existing file\n" << endl;
			getline(cin, action);

			if (action == "1") {
				break;
			}

			else if (action == "2") {
				break;
			}
			else {
				cout << "\nInvalid input\n" << endl;
				system("pause");
				system("cls");
			}
		}
	}
	cout << "Creating text file..." << endl;
	ofstream database;
	if (action == "1") {
		database.open("database.txt", ios::app);
	}
	else if (action == "2") {
		database.open("database.txt");
	}

	else {
		database.open("database.txt");
	}

	while (action != "exit" || action != "EXIT" || action != "Exit") {
		system("cls");
		columncfg:
		cout << "Specify how many columns you want to have for your table (up to 4)" << endl;
		cin >> column;

		if (!cin) {
			cin.clear();
			cin.ignore(100, '\n');
			system("cls");
			cout << "Please enter a valid integer value between 1 and 4\\n" << endl;
			system("pause");
			goto columncfg;
		}
		

	}


}
