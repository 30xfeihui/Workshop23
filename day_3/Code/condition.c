/**
 * 
 * if(True){
 * 	// Execute
 * }
 * else{
 *   // Conditoin is false
 * 	// Execute
 * }
 * 
 * 
 * */

#include<stdio.h>

int main(){

	int a = 12;
	int b = 12;

	int c;

	if(a>b){
		c = a-b;
	}
	else if(a<b){
		c = a+b;
	}
	else{
		c = a*a + b*b;
	}

	return 0;
}