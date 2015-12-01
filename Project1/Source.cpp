#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	srand(unsigned (time(0)));
	int num = (rand() % 2 + 1);
	int count1 = 0;
	int count2 = 0;

	for (int i = 0; i < 10; i++) {
		if (num == 1)
			count1++;

		else if (num == 2)
			count2++;

		cout << num;

		num = (rand() % 2 + 1);
	}
	if (count1 > count2) {
		cout << "Take the summer course" << endl;
		system("pause");
	}

	else {
		cout << "Don't take the summer course" << endl;
		system("pause");
	}
}