#include <stdio.h>
#include <math.h>

int main () {
	
	int a = 6,
	    b = 7,
	    c = 8;
	float A;
	A = (float) pow(a,2) + pow(b,2) + 2*c + sqrt(a+b-c);
	
	return 0;
}
