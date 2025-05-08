#include "Header.h"


int main() {
	
	int q;
	// Welcome !!
	WelAndPro(q);


	// switch the main 
	switch (q) {
	case 1: {
		int qC1;
		cout << "Welcom to \"Math Utilities\", Select the Operation you want :\
\n\n1- Computer Factorial.\n2- Compute Power.\n3- Swap Characters.\
\n4- Calculate Salary.\n5- Area of Triangle."; cin >> qC1;

		Switch_qC1(qC1);
		break;
	}// for main case 1
	case 2: {
		int qC2;
		cout << "Welcom to \"Geometry Calculations\", Select the Operation you want : \n\n1- Area of circle.\
\n2- Volume of Cylinder.\n3- Series Sum.\n4- 3D Volume <Cube>"; cin >> qC2;
		Switch_qC2(qC2);
		break;
	}// for main case 2 
	case 3: {
		int qC3;
		cout << "Welcom to \"3D Calculations\", Select the Operation you want :\
\n\n1- 3D Volume <Pyramid>.\n2- Calculator (4 operations).\n3- Recursive Sum to N."; cin >> qC3;
		Switch_qC3(qC3);
		break;
	}//for main case 3
		  


	}// for swithc main


	




	return 0;
}// for main()