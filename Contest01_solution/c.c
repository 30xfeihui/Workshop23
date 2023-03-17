#include<stdio.h>

int main ()
{
    char a,b;
    scanf("%c %c",&a,&b);

    if(a=='Y'){
        printf("%c\n",b-32);
    }
    else{
        printf("%c\n",b);
    }

    return 0;

}