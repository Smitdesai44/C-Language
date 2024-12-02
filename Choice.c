#include<stdio.h>
int main()
{
int a ;
printf("Enter any number between 1 to 4 = ");
scanf("%d",&a);
if(a == 1)
{
    printf("%d = Area of Circle",a);
}
else if(a == 2)
{
    printf("%d = Area of Rectangle",a);
}
else if(a == 3)
{
    printf("%d = Area of Square",a);
}
else 
{
    printf("Invalid");
}



    return 0 ;
}