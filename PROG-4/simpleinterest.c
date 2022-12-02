#include<stdio.h>
void main()
{
    float p,r,t, simple;
    printf("enter your principal \n");
    scanf("%f",&p);
    printf("enter your rate \n");
    scanf("%f",&r);
    printf("enter your time \n");
    scanf("%f",&t);
    simple = (p*r*t)/100;
    printf("simple interst is %f \n", simple);
}