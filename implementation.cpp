#include "Header.h"
// for print 

void WelAndPro(int &q) {
	
	cout << "\t\t======Welcom======\t\t\n\t\t==================\t\t\n\n";
	cout << "Choce What you want for these Operations : \n1- Math Utilities.\n2- Geometry Calculations.\n3- 3D Calculations." << endl;
	cin >> q;
}
// ========================================

// ## Math Utilities ##
int CalculateMateh(int num) {
	if (num == 1)
		return 1;
	else
		return num + CalculateMateh(num-1);
}

double CalculateMeth(double base, double exp) {
	int pro = 1;
	for (int i = 0; i < exp; i++) {
		pro *= base;
	}
	return pro;
}

void SwapCharacters(char& a, char& b) {
	// a = 3 , b = 5
	a += b;// 3 + 5 = 8
	b = a - b;// 8 - 5 = 3 so b became to a 
	a -= b; // 8 - 3 = 5;
	

}

int CalculateSalary(int dailyfee, int days) {
	return dailyfee * days;
}

int RecursiveSum(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	return sum;
}

// ========================================

// ## Geometry Calculations ##
double area(double base, double height) {
	return 0.5 * base * height;
}

double area(double radius) {
	return π * (radius * radius);
}

double Volume(double radius, double height) {
	return π * radius * 2 * height;
}

double ThreeDVolum(int lenght) {
	return (lenght * lenght * lenght);
}
