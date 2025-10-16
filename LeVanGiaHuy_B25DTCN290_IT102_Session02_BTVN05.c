#include <stdio.h>

int main () {
	
	int number_1 = 44,
	    number_2 = 88, sum_1 ;
	float number_3 = 9.75 , sum_2 ; 
	sum_1 = number_1 + number_2 + number_3;
	sum_2 = (float) number_1 + number_2 + number_3;
	
	printf ("%d\n",sum_1);
	printf ("%f\n",sum_2);
	
	return 0;	
}
