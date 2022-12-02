#include <stdio.h>
void main()
{
    int a,b,c,d ;
    printf("enter your dividend \n");
    scanf("%d", &a);

    printf("enter your divisor \n");
    scanf("%d", &b);

    c = a/b ;
    d = a%b ;
     printf("quotientis %d \n", c);
     printf("remainder %d \n", d);



}