/**
 * 
 *  Input : 1 2 3 a
 * 
 *  if you don't use %*c in scanf before char d input, you will get output as:
 *  Output: 1 2.000000 3
 *  because space is also a character, and it will store in d.
 *  
 *  if you use %*c in scanf before char d input, you will get output as:
 *  Output: 1 2.000000 3 a
 *  because space is stored as dummpy input, and then a will store in d.
 * 
 *  So be careful incase of inputting character :)
 *
 **/

#include<stdio.h>

int main(){
    
    int a,x;
    double b;
    long long c;
    char d;


    scanf("%d", &a);
    scanf("%lf", &b);
    scanf("%lld", &c);

    // here %*c is used for dummy input.
    scanf("%*c%c", &d);

    printf("%d %lf %lld %c\n", a,b,c,d);
    return 0;

}