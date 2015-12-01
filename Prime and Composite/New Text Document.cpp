#include <iostream>
#include <string>

using namespace std;

string input;
int divisors;



int main() {
int num;
int count = 1;
bool composite = false;
while (true) {
cout << "Enter the number that you want to determine whether or not it is prime or composite:		";
cin >> num;
if (!cin || num < 0) {
cin.clear();
cin.ignore(100, '\n');
cout << "\n\nPlease enter a valid integer greater than 0\n" << endl;
continue;
}
break;
}

while (count <= num) {
if (num % count == 0 && num > 2) {
	divisors++;
if (composite == false && divisors > 2) {
composite = true;
cout << "\n\nThe number is composite. It can be divided by:\n\nGetting numbers, please wait....\n" << endl;
count = 1;
continue;
}
if (composite == true)
cout << count << "	";


}
count++;
}
cout << endl;
if (composite == false || num < 3)
cout << "\n\nThis is a prime number\n" << endl;

system("pause");
cout << endl;
divisors = 0;
composite = false;
main();
}
