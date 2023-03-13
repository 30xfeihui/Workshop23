#include<stdio.h>

int main(){

	int a = 5;

	if(a%2==0){
		printf("Even\n");
	}
	else{
		printf("Odd\n");
	}


	if(a%2){
		// if(1) = True
		// if(4) = if(-1) = True
		// if(0) = False
		printf("Odd\n");
	}
	else if(!(a%2)){

		// !True = False
		// !False = True

		// if(!1) = Fasle
		// if(!0) = True
		printf("Even\n");
	}

	return 0;
}