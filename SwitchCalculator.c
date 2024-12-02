// Switch Case Calculator
#include<stdio.h>
int main()
{
  int a , b , choice ;

 printf("\n...Menu...\n");
 printf("\n1. Addition");
 printf("\n2. Substraction");
 printf("\n3. Multiplication");
 printf("\n4. Division");

 printf("\n\nEnter a number of what task you want to perform = ");
 scanf("%d",&choice);

 switch(choice)
 {
    case 1:
     printf("\n\nEnter two Numbers = ");
     scanf("%d%d",&a,&b);
     printf("Addition = %d",a + b);
     break ;

    case 2:
     printf("\n\nEnter two Numbers = ");
     scanf("%d%d",&a,&b);
     printf("Substraction = %d",a - b);
     break ;

    case 3:
     printf("\n\nEnter two Numbers = ");
     scanf("%d%d",&a,&b);
     printf("Multiplication = %d",a * b);
     break;

    case 4:
     printf("\n\nEnter two Numbers = ");
     scanf("%d%d",&a,&b);
     printf("Division = %d",a / b);
     break ;

     default: printf("Invalid Input"); 
 }

    return 0 ;
}