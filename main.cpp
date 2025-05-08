#include "Header.h"


int main() {

	int q;
	cout << "======\t\tWelcom\t\t======\n\nChose from one of this :\n \
\n1- Computer Factorial.\n2- Compute Power.\n3- Swap Characters.\
\n4- Calculate Salary.\n5- Area of Triangle.\n6- Area of circle.\
\n7- Volume of Cylinder.\n8- Series Sum.\n9- 3D Volume <Cube>\
\n10- 3D Volume <Pyramid>.\n11- Calculator (4 operations).\
\n12- Recursive Sum to N.\n13- Exit." << endl;
	cin >> q;

	switch (q) {
	case 1: {
		int number;
		cout << "Enter the number here : "; cin >> number;
		cout << CalculateMateh(number) << endl;
		break;
	}// case 1
	case 2: {
		double base, exp;
		cout << "Enter the Base and exp here : "; cin >> base >> exp;
		cout << CalculateMeth(base, exp) << endl;
		break;
	}
	case 3: {
		char a, b;
		cout << "Enter the 2 char here" << endl;
		cout << "a : "; cin >> a; cout << "b : "; cin >> b;
		SwapCharacters(a, b);
		cout << "a now is : " << a << "\nAnd b now is : " << b << endl;
		break;
	}
	case 4: {
		int dailyFee, days;
		cout << "Enter the daily Fee for empl and who much day he go to work !!"; cin >> dailyFee >> days;
		cout << CalculateSalary(dailyFee, days) << endl;
		break;
	}
	case 5: {
		break;
	}
	case 6: {
		break;
	}
	case 7: {
		break;
	}
	case 8: {
		break;
	}
	case 9: {
		break;
	}
	case 10: {
		break;
	}
	case 11: {
		break;
	}
	case 12: {
		break;
	}
	case 13: {
		break;
	}




	}// for switch










	return 0;
}