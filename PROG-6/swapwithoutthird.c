#include<stdio.h>
void main()
{
    int a,b;
    printf("enter your digit \n");
    scanf("%d",&a);
    printf("enter your digit \n");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("swap no is %d %d",a,b);
}