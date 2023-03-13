/**
 * 
 * In case of more if's
 * Iw will check every if
 * 
 * 
 * output:
 * One
 * Two
 * Three
 * 
 * */

#include<stdio.h>

int main(){

	int a = 10;
	int b = 10;

	if( a==b){
		printf("One\n");
    }
	if( a>= b){
		printf("Two\n");
    }
	if( a<= b){
		printf("Three\n");
    }

    return 0;
}