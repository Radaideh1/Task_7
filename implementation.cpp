#include "Header.h"

int CalculateMateh(int num) {
	if (num == 1)
		return 1;
	else
		return num + CalculateMateh(num-1);
	
}
