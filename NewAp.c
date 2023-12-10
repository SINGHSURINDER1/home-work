#include<stdio.h>
int main()
    {
        int n;
        printf("enter the value of n");
        scanf("%d",&n);
        printf("the given ap is");
        for(int i=1;i<=3*n-1;i=i+3){
            printf("%d\n",i);
        }

    }