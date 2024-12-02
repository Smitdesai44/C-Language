// If-else ladder calculator.
#include<stdio.h>
int main()
{
 int a , b , choice ;

 printf("\n...Menu...\n");
 printf("\n1. Addition");
 printf("\n2. Substraction");
 printf("\n3. Multiplication");
 printf("\n4. Division");

 printf("\n\nEnter a number of what you want to do = ");
 scanf("%d",&choice);

 printf("\n\nEnter two Numbers = ");
 scanf("%d%d",&a,&b);

 if(choice == 1)
 {
     printf("Addition = %d",a + b);
 }
 else if(choice == 2)
 {
     printf("Substraction = %d",a - b);
 }
 else if(choice == 3)
 {
     printf("Multiplication = %d",a * b);
 }
 else if(choice == 4)
 {
     printf("Division = %d",a / b);
 }
 else 
 {
     printf("Invalid Input");   // So here in if else ladder, there is an drawback...if user puts choice 5 it
 }                              // should show invalid input directly without asking "Enters two numbers" wala 
                                // printf..but it is showing that printf ....so for this we use switch case.
    return 0 ;
}

