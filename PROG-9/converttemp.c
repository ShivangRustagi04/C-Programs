#include<stdio.h>
void main()
{
    float c,f;
    printf("enter temperature in celsius: \n");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("celsius to farehneit is %.2f",f);
}