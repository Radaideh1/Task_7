#include "Header.h"

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

void add(int a, int b) {
	cout << "a + b = " << a + b << endl;
}
void add(double a, double b) {
	cout << "a + b = " << a + b << endl;
}

