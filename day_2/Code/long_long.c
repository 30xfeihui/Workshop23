/**
 * 
 * Limit : (-2^63) to (2^63-1)
 * Limit : (-10^18) to (10^18)
 * 
 **/

#include<stdio.h>

int main(){
	
	long long a = 1e8+45, b = 1e8; // 1e8 = 10^8 = 100000000

	long long subs;

	subs = a-b;
	printf("%lld\n", subs);

	long long mult;
	mult = a*b;
	printf("%lld\n", mult);

	return 0;

}