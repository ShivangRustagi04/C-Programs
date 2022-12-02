#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    float avg;
    printf("enter first number : \n");
    scanf("%d",&a);
    printf("enter sec number : \n");
    scanf("%d",&b);
    printf("enter third number : \n");
    scanf("%d",&c);
    printf("enter fourth number : \n");
    scanf("%d",&d);
    printf("enter fifth number : \n");
    scanf("%d",&e);
    avg = (float)(a+b+c+d+e)/5;
    printf("avg of %d,%d,%d,%d,%d is %f", a,b,c,d,e,avg);
}