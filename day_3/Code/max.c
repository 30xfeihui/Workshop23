#include<stdio.h>

int main(){

	int a = 4;
	int b = 10;

	int maxx;

	if(a>b){
		maxx = a;
	}
	else if(a<b){
		maxx = b;
	}
	else{
		printf("Equal\n");
	}

	return 0;
}