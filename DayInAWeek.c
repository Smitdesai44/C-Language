#include<stdio.h>
int main()
{
int day;
printf("\nEnter the numbers between 1 -7 = ");
scanf("%d",&day);
if(day == 1)
{
    printf("\n%d = MONDAY\n",day);
}
else if(day == 2)
{
    printf("\n%d = TUESDAY\n",day);
}
else if(day == 3)
{
    printf("\n%d = WEDNESDAY\n",day);
}
else if(day == 4)
{
    printf("\n%d = THURSDAY\n",day);
}
else if(day == 5)
{
    printf("\n%d = FRIDAY\n",day);
}
else if(day == 6)
{
    printf("\n%d = SATURDAY\n",day);
}
else if(day == 7)
{
    printf("\n%d = SUNDAY\n",day);
}
else 
{
    printf("\n%d = INVALID number .... Please enter the number between 1 -7\n",day);
}

    return 0 ;
}

