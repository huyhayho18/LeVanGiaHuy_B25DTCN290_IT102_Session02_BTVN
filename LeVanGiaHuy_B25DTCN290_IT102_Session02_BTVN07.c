#include <stdio.h>

int main () {
	
	int number = 12345;
	int result_1 = number / 10000,
	    result_2 = (number % 10000) / 1000,
	    result_3 = (number % 1000) / 100,
	    result_4 = (number % 100) / 10,
	    result_5 = (number % 10), sum;
	sum = result_1 + result_2 + result_3 +result_4 + result_5;

	return 0;
}
