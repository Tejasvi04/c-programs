//Area and Perimeter of triangle
#include<stdio.h>
void main()
{
float b,h,area,p,a;
printf("Enter the value of b,a,h\n");
scanf("%f%f%f",&b,&a,&h);
area=0.5*b*h;
p=a+b+h;
printf("Area of the Triangle=%f\n",area);
printf("Perimeter of the Triangle=%f\n",p);
}

