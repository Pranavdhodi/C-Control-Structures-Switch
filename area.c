#include <stdio.h>
#define pi 3.14
int main()
{
int choice;
float a,b,c,r,area;
printf("----------MENU----------\n");
printf("[1] Area of a Circle\n");
printf("[2] Area of a Rectangle\n");
printf("[3] Area of a Triangle\n");
printf("Enter your Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter radius:");
scanf("%f",&r);
area=pi*r*r;
printf("The Area of the Circle with Radius %f is %f",r,area);
break;
case 2:
printf("Enter Length:");
scanf("%f",&a);
printf("Enter Breath:");
scanf("%f",&b);
area=a*b;
printf("The Area of the Rectangle with Length %f and Breath %f is %f",a,b,area);
break;
case 3:
printf("Enter base:");
scanf("%f",&a);
printf("Enter altitude:");
scanf("%f",&b);
area=0.5*a*b;
printf("The Area of the triangle with base %f and altitude %f is %f",a,b,area);
break;
default:
printf("Abe Pagal Hai Kya");
}
return 0;
}



