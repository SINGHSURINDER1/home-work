#include<stdio.h>
int main()
{
    int ram;
    printf("enter the age of ram");
    scanf("%d",&ram);
    int sham;
    printf("enter the age of sham");
    scanf("%d",&sham);
    int ajay;
    printf("enter the age of ajay");
    scanf("%d",& ajay);
    if(ram<sham&&ram<ajay)
    {
        printf("the ram is youngest one");
    }
    if(sham<ram&&sham<ajay)
    {
        printf("the sham is youngest one");
    }
    if(ajay<sham&&ajay<ram)
    {
        printf("the ajay is youngest one");
    }

}