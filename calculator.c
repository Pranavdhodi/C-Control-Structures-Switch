#include <stdio.h>
#include <math.h>
int main()
{
int choice;
float a,b,c;
printf("----------MENU----------\n");
printf("[1]  Addition\n");
printf("[2]  Subtraction\n");
printf("[3]  Multiplication\n");
printf("[4]  Division\n");
printf("Enter Your Choice:");
scanf("%d",&choice);
printf("Enter First Number:");
scanf("%f",&a);
printf("Enter Second Number:");
scanf("%f",&b);
switch(choice)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
break;
default:
printf("Wrong Choice");
}
printf("The Solutions is %f",c);

return 0;
}



