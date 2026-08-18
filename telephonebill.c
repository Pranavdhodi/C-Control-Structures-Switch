#include <stdio.h>
int main()
{
int calls;
float bills;
printf("Enter Number of calls:");
scanf("%d",&calls);
switch(calls)
{
case 1 ... 150:
bills=0;
break;
case 151 ... 250:
bills=0+0.9*(calls-100);
break;
case 251 ... 400:
bills=0+0.9*100+1.2*(calls-150);
break;
case 401 ... 200000000:
bills=0+0.9*100+1.2*150+1.9*(calls-400);
break;
default:
printf("Wrong Choice");
}
printf("The bill to your %d calls is %f",calls,bills);
return 0;
}
