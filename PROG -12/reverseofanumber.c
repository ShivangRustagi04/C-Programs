#include<stdio.h>
void main()
{
    int x,b,c,d;
    printf("enter your number");
    scanf("%d",&x);
    printf("%d",x);
    b = x%10;
    x = x/10;
    c = x%10;
    x = x/10;
    d = x%10;
    x = x/10;
    
    x = ( b*100 + c*10 + d);
    printf("reversed number is %d",x);

}