
#include<stdio.h>

int main(){
	
	int a = 5;
	int b = 3;

	double c = a/b;

	printf("%lf\n", c); // output 1.000000


	// type casting
	double d = (double) a/b;

	printf("%lf\n", d); // output 1.666667

	return 0;

}