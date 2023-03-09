/**
 * 
 * Limit : (-2^31) to (2^31-1)
 * Limit : (-10^9) to (10^9)
 * 
 **/

#include<stdio.h>

int main(){
	
	int a = 20, b = 30, c = 45.56;

	int sum;

	sum = a+b; // both integer
	printf("%d\n", sum);

	sum = a+b+c; // two integer and one double
	printf("%d\n", sum);

	return 0;

}