#include<stdio.h>
int main()
{
    int n;
    do{
        printf("enter a number");
        scanf("%d",&n);
        printf("%d",n);
        if(n%7==0)
        {
            printf("the lopp is finished due to getting a 7 number multiple");
            break;
        }
    }while(1);
}