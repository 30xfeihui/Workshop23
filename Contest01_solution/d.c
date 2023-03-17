#include<stdio.h>

int main(){


    int s, d, t;
    scanf("%d %d %d", &s, &d, &t);

    if(s*t >= d){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }

    return 0;
}