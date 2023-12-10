#include<stdio.h>
void main()
{
    float r,a,l,b;
    printf("enter the number");
    scanf("%f",&a);
    printf("enter the side of square");
    scanf("%f",&a);
    printf("enter the lengh and breadth if rectangle");
    scanf("%f%f",&l,&b);
    float area,peri,ar,pr,are,per;
    area=a*a;
    pr=4*a;
    ar=l*b;
    per=2*(l+b);
    are=3.14*r*r;
    peri=2*3.14*r;
    printf("area of rectangle%.2f",area);
    printf("perimeter of circle=%.2f\n",peri);
    printf("area of square=%f\n",pr);
    printf("peri of square=%f\n",pr);
    printf("area of rect=%f\n",ar);
    printf("peri of rect=%f\n",per);
}