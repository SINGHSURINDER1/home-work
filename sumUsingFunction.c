#include<stdio.h>
int sum(int a ,int b);

int main()
    {
        int a;
        printf("enter the value of a");
        scanf("%d",&a);
        int b;
        printf("enter the value of b");
        scanf("%d",&b);
       int s= sum( a , b);
        printf("the sum of %d and %d is: %d",a,b,s);
    }
    int sum(int x, int y){
        return x+y;
    }