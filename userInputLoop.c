#include<stdio.h>
int main()
{
    int n;
    do{
    printf("enter a number ");
    scanf("%d",&n);
    if(n%2!=0){
        break;
    }
    }while (1);  
}