#include <stdio.h>
int main()
{
int calls;
float bill;
printf("Enter the Number of Calls:");
scanf("%d",&calls);
switch(calls)
{
case 1 ... 100:
bill=200;
break;
case 101 ... 150:
bill=200+0.6*(calls-100);
break;
case 151 ... 200:
bill=200+0.6*50+0.5*(calls-150);
break;
case 201 ... 2000000:
bill=200+0.6*50+0.5*50+0.4*(calls-200);
break;
default:
printf("Baas kar kitna kharcha Karega?");
}
printf("\nThe bill to the %d calls is %f",calls,bill);
return 0;
}
