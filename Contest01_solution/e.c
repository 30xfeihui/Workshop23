#include<stdio.h>

int main(){


    int n;
    scanf("%d", &n);

    int sum = 0;
    int a;

    for(int i=0;i<n;i++){
        scanf("%d", &a);
        sum = sum+a;
    }

    printf("%d\n", sum);

    return 0;
}