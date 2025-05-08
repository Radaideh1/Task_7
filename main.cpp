#include "Header.h"


int main() {
	int q;
	cin >> q;
	// Welcome !!
	WelAndPro(q);

	// switch the main 
	switch (q) {
	case 1: {
		int qC1;
		cout << "Welcom to \"Math Utilities\", Select the Operation you want :\n\n1- Computer Factorial.\n2- Compute Power.\n3- Swap Characters.\
\n4- Calculate Salary.\n5- Area of Triangle."; cin >> qC1;

		switch (qC1) {
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
		}// case 2
		case 3: {
			char a, b;
			cout << "Enter the 2 char here" << endl;
			cout << "a : "; cin >> a; cout << "b : "; cin >> b;
			SwapCharacters(a, b);
			cout << "a now is : " << a << "\nAnd b now is : " << b << endl;
			break;
		}// case 3
		case 4: {
			int dailyFee, days;
			cout << "Enter the daily Fee for empl and who much day he go to work !!"; cin >> dailyFee >> days;
			cout << CalculateSalary(dailyFee, days) << endl;
			break;
		}// case 4
		case 5: {
			add(13, 17);
			add(154.0, 6456.32);
			break;
		}// case 5
		}// switch qC1
		break;
	}// for main case 1
	case 2: {
		int qC2;
		cout << "Welcom to \"Geometry Calculations\", Select the Operation you want : \n\n1- Area of circle.\
\n2- Volume of Cylinder.\n3- Series Sum.\n4- 3D Volume <Cube>"; cin >> qC2;
		switch (qC2) {
		case 1: {
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			break;
		}
		}// for switch
		break;
	}// for main case 2 
	case 3: {
		int qC3;
		cout << "Welcom to \"3D Calculations\", Select the Operation you want :\
\n\n1- 3D Volume <Pyramid>.\n2- Calculator (4 operations).\n3- Recursive Sum to N."; cin >> qC3;
		switch (qC3) {
		case 1: {
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			break;
		}

		}// for swithc qC3
		break;
	}//for main case 3
		  


	}// for swithc main


	




	return 0;
}