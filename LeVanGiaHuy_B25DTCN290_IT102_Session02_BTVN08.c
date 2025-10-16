#include <stdio.h>

int main () {
	
	int number = 12345,
	    final_number = number % 10,
	    next_number = number / 10;
	int single_number_1 = next_number % 10,
	    single_number_2 = (next_number % 100) / 10,
	    single_number_3 = (next_number % 1000) / 100,
	    single_number_4 = (next_number % 10000) / 1000,  result;
    result = single_number_1 * 1000 + single_number_2 * 100 + single_number_3 * 10 + single_number_4;

	return 0;
}
