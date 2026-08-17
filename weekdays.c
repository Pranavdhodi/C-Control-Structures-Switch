#include <stdio.h>
int main()
{
int choice;
printf("----------MENU----------\n");
printf("[1]        Sunday\n");
printf("[2]        Monday\n");
printf("[3]        Tuesday\n");
printf("[4]        Wednesday\n");
printf("[5]        Thursday\n");
printf("[6]        Friday\n");
printf("[7]        Saturday\n");
printf("Enter your Day of Choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("Saturday");
break;
default:
printf("Wrong Choice");
}
return 0;
}


