#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter the value od n1");
    scanf("%d",n1);
    printf("enter the value od n2");
    scanf("%d",n2);
    printf("enter the value od n3");
    scanf("%d",n3);
    if(n1>n2&&n1>n3)
    {
        printf("n1 is greatest number");
    }
    if(n2>n1&&n2>n3){
    printf("n1 is greatest number");
    }
    if(n3>n1&&n3>n2){
    printf("n3 is greatest number");
    }
}