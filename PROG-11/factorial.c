#include<stdio.h>
void main()
{
   int n,i,f = 1;
   printf("enter your number \n");
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
      f = f * i;

   }
   printf("factorial is %d \n",f);
}