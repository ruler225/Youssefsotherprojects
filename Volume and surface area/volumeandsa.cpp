#include<iostream>		
#include<string>
#include<sstream>	
	
using namespace std;		


const double PI = 3.141592653589793238462643383279502884197169399375;		

bool fixcin() {	
if (!cin) {	
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Please enter a valid integer" << endl;
	system("pause");
	system("cls");
	return false;
}
else {
	return true;
}
}



void volume() {			
	string option;
	string calculation;
	stringstream calc;
	double area, base, height, radius, length, width, sidea, sideb;
	system("cls");
	cout << "What kind of shape are you finding the volume of?\n" << endl;
	cout << "p)rism" << endl;
	cout << "c)one or pyramid" << endl;
	cout << "s)phere" << endl;
	cin >> option;
	
	if (option == "p") {
		system("cls");
		cout << "What is your base?\n" << endl;
		cout << " c)ircle (cylinder)" << endl;
		cout << " s)quare/rectangle" << endl;
		cout << " t)riangle"	<< endl;
		cout << "t(r)apezoid"	<< endl;
		cout << " p)arallelogram" << endl;
		cout << " o)ther" << endl;
		cin >> option;
		
		
		if (option == "c") {
			calc.clear();
			system("cls");
		calc << "V = (pi)r^2 h" << endl;
		calculation = calc.str();
	
		do {
		cout << calculation << endl << endl;
		cout << "Enter value for r (radius)" << endl;
		cin >> radius;
		system("cls");
		
		
	}
	while (fixcin() == false);
	
		calc << "= (pi)(" << radius << ")^2 h" << endl;
		calc << "= (" << PI*pow(radius, 2) << ") h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl << "Enter a value for h (height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
		
		
	
	
calc << "= (" << PI*pow(radius, 2) << ")(" << height << ")" << endl;
	calc << "= " << PI*pow(radius, 2)*height << endl;

	calculation = calc.str();
	
	cout << "\nThe volume is:\n\n" << calculation << endl;
	system("pause");
	
		
	}
	
	else if (option == "s") {
		system("cls");
		calc.clear();
		calc << "V = Lwh" << endl;
		calculation = calc.str();
		do {
		cout << calculation;
		cout << "\n Enter a value for L (length of base)" << endl;
		cin >> length;
		system("cls");
	}
		while (fixcin() == false);
		
		calc << "= (" << length << ")wh" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for w (width of base)" << endl;
		cin >> width;
		system("cls");
	}
	while (fixcin() == false);
		
		calc << "= (" << length << ")(" << width << ")h" << endl;
		calc << "= (" << length*width << ")h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for h (height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
		
		calc << "= (" << length*width << ")(" << height << ")" << endl;
		calc << "= " << length*width*height << endl;
		calculation = calc.str();
		
		cout << "The volume is:\n\n" << calculation << endl;
		system("pause"); 
		
		
	}
	
	else if (option == "t") {
		system("cls");
		calc.clear();
		calc << "V = (bt/2) h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for b (base of triangle)" << endl;
		cin >> base;
		system("cls");
	}
	while (fixcin() == false);
	 
		
		calc << "= ((" << base << ")t/2) h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for t (triangle height) " << endl;
		cin >> length;
		system("cls");
	}
	while (fixcin() == false);
	
		
		calc << "= ((" << base << ")(" << length << ")/2) h" << endl;
		calc << "= ((" << base*length << ")/2) h" << endl;
		calc << "= (" << (base*length)/2 << ")h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for h (prism height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
	
		calc << "= (" << (base*length)/2 << ")(" << height << ")" << endl;
		calc << "= " << ((base*length)/2)*height << endl;
		calculation = calc.str();
		cout << "The volume is:\n\n" << calculation << endl;
		system("pause"); 		
		
		
	}
	
	else if (option == "r") {
		calc.clear();
		system("cls");
		calc << "V = [((a + b)t)/2]h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for a (side a of trapezoid base)" << endl;
		cin >> sidea;
		system("cls");
	}
	while (fixcin() == false);
		
		
		calc << "= [((" << sidea << " + b)t)/2]h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for b (side b of trapezoid)" << endl;
		cin >> sideb;
		system("cls");
	}
	while (fixcin() == false);
		

		
		calc << "= [((" << sidea << " + " << sideb << ")t)/2]h" << endl;
		calc << "= [((" << sidea + sideb << ")t)/2]h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for t (trapezoid height)" << endl;
		cin >> length;
		system("cls");
	}
	while (fixcin() == false);
	
		
		calc << "= [((" << sidea + sideb << ")" << length << ")/2]h" << endl;
		calc << "= [" << (sidea + sideb)*length << "/2]h" << endl;
		calc << "= (" << ((sidea + sideb)*length)/2 << ")h" << endl; 
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for h (prism height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
	
		
		calc << "= (" << ((sidea + sideb)*length)/2 << ")(" << height << ")" << endl;
		calc << "= " << (((sidea + sideb)*length)/2)*height << endl;
		calculation = calc.str();
		cout << "The volume is:\n\n" << calculation << endl;
		system("pause");
		
	}

	else if (option == "p") {
		calc.clear();
		system("cls");
		calc << "V = bph" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for b (base of parallelogram)" << endl;
		cin >> base;
		system("cls");
}
while (fixcin() == false);
	

		calc << "= (" << base << ")ph" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for p (height of the parallelogram)" << endl;
		cin >> length;
		system("cls");
}
while (fixcin() == false);

		calc << "= (" << base << ")(" << length << ")h" << endl;
		calc << "= (" << base*length << ")h" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for h (height of the prism)" << endl;
		cin >> height;
		system("cls");
}
while (fixcin() == false);
		

		calc << "= (" << base*length << ")(" << height << ")" << endl;
		calc << "= " << base*length*height << endl;
		calculation = calc.str();
		cout << "The volume is:\n" << endl;
		cout << calculation << endl;
		system("pause");

	}

	else if (option == "o") {
		calc.clear();
		system("cls");
		calc << "V = (Area of base)(height)" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "What is the area of the base?" << endl;
		cin >> area;
		system("cls");
}
while (fixcin() == false);

		calc << "= (" << area << ")(height)" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nWhat is the height of the prism?" << endl;
		cin >> height;
		system("cls");
}
while (fixcin() == false);
		

		calc << "= (" << area << ")(" << height << ")" << endl;
		calc << "= " << area*height << endl;
		calculation = calc.str();
		cout << "The volume is:\n" << endl;
			cout << calculation << endl;
		system("pause");
	}
		
	else {
		cout << "\nNot a valid input! Uppercase letters are not accepted!" << endl;
		system("pause");
		volume();
	}
		
		
	}
	
	else if (option == "c") {
		system("cls");
		cout << "What is your base?\n" << endl;
		cout << "t)riangle" << endl;
		cout << "s)quare or rectangle" << endl;
		cout << "c)ircle (cone)" << endl;
		cout << "o)ther" << endl;
		cin >> option;
		
		if (option == "t") {
			system("cls");
		calc.clear();
		calc << "V = [(bt/2)h]/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for b (base of triangle)" << endl;
		cin >> base;
		system("cls");
	}
	while (fixcin() == false);
	
		
		calc << "= [((" << base << ")t/2) h]/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for t (triangle height) " << endl;
		cin >> length;
		system("cls");
	}
	while (fixcin() == false);
	
		
		calc << "= [((" << base << ")(" << length << ")/2) h]/3" << endl;
		calc << "= [((" << base*length << ")/2) h]/3" << endl;
		calc << "= [(" << (base*length)/2 << ")h]/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for h (prism height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
		
		calc << "= [(" << (base*length)/2 << ")(" << height << ")]/3" << endl;
		calc << "= (" << ((base*length)/2)*height << ")/3" << endl;
		calc << "= " << (((base*length)/2)*height)/3 << endl;
		calculation = calc.str();
		cout << "The volume is:\n\n" << calculation << endl;
		system("pause"); 		
		}
		
		
		
		else if (option == "s") {
			system("cls");
		calc.clear();
		calc << "V = Lwh/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation;
		cout << "\n Enter a value for L (length of base)" << endl;
		cin >> length;
		system("cls");
	}
	while (fixcin() == false);
		
		
		calc << "= (" << length << ")wh/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for w (width of base)" << endl;
		cin >> width;
		system("cls");
	}
	while (fixcin() == false);
		
		
		calc << "= (" << length << ")(" << width << ")h/3" << endl;
		calc << "= (" << length*width << ")h/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for h (height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
	
		
		calc << "= (" << length*width << ")(" << height << ")/3" << endl;
		calc << "= " << (length*width*height)/3 << endl;
		calculation = calc.str();
		
		cout << "The volume is:\n\n" << calculation << endl;
		system("pause"); 
		}
 
 
else if (option == "c") {
	calc.clear();
			system("cls");
		calc << "V = [(pi)r^2 h]/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl << endl;
		cout << "Enter value for r (radius)" << endl;
		cin >> radius;
		system("cls");
	}
	while (fixcin() == false);
		
		calc << "= [(pi)(" << radius << ")^2 h]/3" << endl;
		calc << "= [(" << PI*pow(radius, 2) << ") h]/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl << "Enter a value for h (height)" << endl;
		cin >> height;
		system("cls");
	}
	while (fixcin() == false);
	
calc << "= (" << PI*pow(radius, 2) << ")(" << height << ")/3" << endl;
calc << "= (" << PI*pow(radius, 2)*height << ")/3" << endl;
calc << "= " << (PI*pow(radius, 2)*height)/3 << endl;

	calculation = calc.str();
	
	cout << "\nThe volume is:\n\n" << calculation << endl;
	system("pause");
}


else if (option == "o") {
	calc.clear();
		system("cls");
		calc << "V = [(Area of base)(height)]/3" << endl;
		calculation = calc.str();
		do {	
		cout << calculation << endl;
		cout << "What is the area of the base?" << endl;
		cin >> area;
		system("cls");
}
	while (fixcin() == false);

		calc << "= [(" << area << ")(height)]/3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nWhat is the height of the prism?" << endl;
		cin >> height;
		system("cls");
}
	while (fixcin() == false);

		calc << "= [(" << area << ")(" << height << ")]/3" << endl;
		calc << "= (" << area*height << ")/3" << endl;
		calc << "= " << (area*height)/3 << endl;
		calculation = calc.str();
		cout << "The volume is:\n" << endl;
			cout << calculation << endl;
		system("pause");
}

	}
	
	else if (option == "s") {
		system("cls");
		calc.clear();
		calc << "V = 4(PI)r^3 / 3" << endl;
		calculation = calc.str();
		do {
		cout << calculation << endl;
		cout << "\nEnter a value for r (radius)" << endl;
		cin >> radius;
		system("cls");
	}
	while (fixcin() == false);
		
		calc << "V = 4(PI)(" << radius << ")^3 / 3" << endl;
		calc << "V = " << (4*PI*pow(radius, 3))/3 << endl;
		calculation = calc.str();
		cout << "The volume is:\n" << endl;
		cout << calculation << endl;
		system("pause");
		
		
	}
	
	
}




void sa() {
	double length, width, height, radius, base, sidea, sideb;
	string option, calculation;
	stringstream calc;
	system("cls");
	cout << "What kind of shape?\n" << endl;
	cout << "p)rism" << endl;
	cout << "c)one or pyramid" << endl;
	cout << "s)phere" << endl;
	cin >> option;

	if (option == "p") {
		system("cls");
		cout << "What is your base?\n" << endl;
		cout << " r)ectangle or square" << endl;
		cout << " t)riangle" << endl;
		cout << "t(r)apezoid" << endl;
		cout << " p)arallelogram" << endl;
		cout << " c)ircle (cylinder)" << endl;
			cout << " o)ther" << endl;
		cin >> option;

		if (option == "r") {
			system("cls");
			calc.clear();
			calc << "SA = 2(LW + LH + WH)" << endl;
			do {
				cout << calculation << endl;
				cout << "\nEnter a value for L (length)" << endl;
				cin >> length;
				system("cls");
			} while (fixcin() == false);
			calc << "= 2((" << length << ")W + (" << length << ")H + WH)" << endl;
			calculation = calc.str();
			do {
				cout << calculation << endl;
				cout << "\nEnter a value for W (width)" << endl;
				cin >> width;
				system("cls");
			} while (fixcin() == false);

			calc << "= 2((" << length << ")(" << width << ") + (" << length << ")H + (" << width << ")H)" << endl;
			calc << "= 2(" << length*width << " + (" << length << ")H + (" << width << ")H)" << endl;
			calculation = calc.str();
			do {
				cout << calculation << endl;
				cout << "\nEnter a value for H (height or prism)" << endl;
				cin >> height;
				system("cls");
			} while (fixcin() == false);

			calc << "= 2(" << length*width << " + (" << length << ")(" << height << ") + (" << width << ")(" << height << "))" << endl;
			calc << "= 2(" << length*width << " + " << length*height << " + " << width*height << ")" << endl;
			calc << "= 2(" << (length*width) + (length*height) + (width*height) << ")" << endl;
			calc << "= " << 2 * ((length*width) + (length*height) + (width*height)) << endl;
			calculation = calc.str();
			cout << "The surface area is:\n" << endl;
			cout << calculation << endl;
			system("pause");


		}

	}
}

void helppage() {
	system("cls");
	cout << "Calculating volume:\n" << endl;
	cout << "First, select prism, pyramid, or sphere." << endl;
	cout << "Next, select the shape of your base. Selecting other will assume that you already have the area of the base (doing irregular shapes is beyond this program's capability as that would require the shape to be broken into pieces)" << endl;
	cout << "Next, enter the dimensions requested by the program" << endl;
	cout << "Now enter the height and you're done! The calculations will even be shown on the screen so you can check the work because I'm not a professional programer." << endl;
	cout << "PLEASE NOTE (most people won't understand): Due to the nature of the double integer type, the answers you get may not be exact (off by about 0.001)" << endl;
	cout << "PI is not exact. It has been rounded to 3.141592653589793238462643383279502884197169399375  (which is good enough for our needs) " << endl;
	cout << "\n\n\n" << endl;
	cout << "Calculating surface area:\n" << endl;
	cout << "First, select the number of sides" << endl;
	cout << "Next, select the shape you want the area of. Picking other will require you to enter the area yourself as this is beyond the capabilities of this program" << endl;
	cout << "Follow any instructions or answer any questions the program asks you" << endl;
	cout << "Finally, enter the dimensions requested by the program and you're done!\n" << endl;
	cout << "\n\n" << endl;
	cout << "To navigate through this program, type the letter in brackets. For example, to select p)rism, type in p\n" << endl;
	system("pause");

}



int main() {
	string option;
	do {	
	system("cls");				
	cout << "Type the letter corresponding to the option you wish (if this is your first time using this, go to help):\n\n v)olume		s)urface area		h)elp		q)uit" << endl;			
	cin >> option;	
	

if (option == "v") 
volume();
			
else if (option == "s")			
			sa();
			
			else if (option == "h") 
			helppage();					
				
			else if (option == "q")
			NULL;	
										
			else {
				cout << "invalid input. Type \"v\", \"s\", \"h\", or \"q\" (uppercase characters are not accepted)\n" << endl;
				system("pause");	
				system("cls");		
			}
									
				
			
	} while (option != "q");		
}

