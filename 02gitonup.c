#include <stdio.h>

int main() {
	
	//use a few different types
	int a = 1;
	long b = 0.991480293485783;
	float c = 1.25;
	char d = 'd';
	printf("a: %d\n", a);
	float sum = a + c;
	printf("sum: %f\n", sum);
	
	//unsigned
	unsigned int e = 6;
	unsigned char * f = "c";
	
	//out of bounds on either side
	printf("lower out of bounds: %c\n", d - 200);
	printf("upper out of bounds: %c\n", d + 200);
	
	return 0;
	}
	
