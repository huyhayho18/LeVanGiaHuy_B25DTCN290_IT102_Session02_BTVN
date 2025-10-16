#include <stdio.h>
#include <math.h>

int main () {
	
	int a = 6,
	    b = 7,
	    c = 8;
	float S;
	S = ((float)sqrt(pow(a,2) + pow(b,2))) / (c + 1) + ((float)a * b) / c - ((float)sqrt (fabs(a - b) + pow(c,2)));
	    
	return 0;
}

