#include <stdio.h>
int main()
{
int costprice;
float discount;
printf("Enter Your Cost Price:");
scanf("%d",&costprice);
switch(costprice)
{
case 1 ... 500:
discount=0;
break;
case 501 ... 800:
discount=((costprice-500)*20/100);
break;
case 801 ... 2000000000:
discount=((300*20)/100)+(((costprice-800)*25)/100);
break;
default:
printf("Wrong Choice");
}
printf("The Discount to Costprice %d is %f",costprice,discount);
return 0;
}
