#include<stdio.h>
int main()
{

int year;
printf("Enter your any year :");
scanf("%d",&year);

if(year % 400 == 0)
{
    printf("%d is the leap year.\n",year);
}
else if(year % 4 == 0 && year % 100 != 0)
{
    printf("%d is the leap year.\n",year);
}
else
{
    printf("%d is a not leap year.\n",year);
}

return 0;

    
}