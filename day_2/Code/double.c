/**
 * 
 * Limit : (-2^63) to (2^63-1)
 * Limit : (-10^18) to (10^18)
 * 
 **/

#include<stdio.h>

int main(){
	
	double a = 20.04, b = 30.11, c = 45.56;

	double sum;

	sum = a+b; // prints 6 digits after fraction 
	printf("%lf\n", sum);

	double mult;
	mult = a*b*c; // prints 3 digits after fraction
	printf("%.3lf\n", mult);

	return 0;

}