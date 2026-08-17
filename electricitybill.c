#include <stdio.h>
int main()
{
int calls;
float bill;
printf("Enter Number of Calls:");
scanf("%d",&calls);
switch(calls)
{
case 1 ... 150:
bill=0;
break;
case 151 ... 250:
bill=0.9*(calls-150);
break;
case 251 ... 400:
bill=0.9*100+1.2*(calls-250);
break;
case 401 ... 20000000:
bill=0.9*100+1.2*150+1.5*(calls-400);
break;
default:
printf("Wrong Choice");
}
printf("\nThe bill to the %d calls is %f",calls,bill);
return 0;
}
