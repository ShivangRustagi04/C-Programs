#include<stdio.h>
void main()
{
    int x,y,w,d;
    printf("enter no. of days \n");
    scanf("%d", &x);
    y = x/365;
    w = (x%365)/7;
    d = (x%365)%7;
    printf("enter no. of years %d \n",y);
    printf("enter no. of weeks %d \n",w);
    printf("enter no. of days %d \n",d);

}