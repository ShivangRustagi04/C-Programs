#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter your digit \n");
    scanf("%d",&a);
    printf("enter your digit \n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swap no is %d %d",a,b);
}