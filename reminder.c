#include<stdio.h>
int main()
{
   float a,b;
   printf("enter the value of a:");
   scanf("%f",&a);
   printf("enter the value of b:");
   scanf("%f",&b);
   float d=a/b;
   float  r=a-(b*d);
   printf("%f",r);
}
