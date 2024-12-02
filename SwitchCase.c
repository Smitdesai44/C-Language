#include<stdio.h>
int main()
{
 int a , b , choice , age ;

 printf("\n....Menu....\n");
 printf("\n1. Even or Odd");
 printf("\n2. Positive or Negative");
 printf("\n3. Greater Among 2");
 printf("\n4. Eligible for voting or Not\n");

 printf("\nEnter your Choice = ");
 scanf("%d",&choice);

 switch(choice)
 {

    case 1 :
     printf("\n\nSelection of Even or Odd\n");
     printf("\nEnter a Number = ");
     scanf("%d",&a);
     
     if(a % 2 == 0)
     {
         printf("\n%d is a Even Number = ",a);
     }
     else 
     {
         printf("\n%d is a Odd Number",a);
     }
     break ;



    case 2 :
     printf("\n\nSelection of Positive or Negative\n");
     printf("\nEnter a Number = ");
     scanf("%d",&a);

     if(a > 0)
     {
         printf("\n%d is a Positive Number",a);
     }
     else if(a == 0)
     {
         printf("\n%d is Neither Positive nor Negative",a);
     }
     else 
     {
         printf("\n%d is a Negative Number",a);
     }
     break ;



    case 3 :
     printf("\n\nSelection of Greater Among 2 Numbers\n");
     printf("\nEnter 2 Numbers = ");
     scanf("%d%d",&a,&b);

     if(a > b)
     {
         printf("\n%d is Greater than %d",a,b);
     }
     else if(b > a)
     {
         printf("\n%d is Greater than %d",b,a);
     }
     else 
     {
         printf("\n%d and %d is Equal Number",a,b);
     }
     break ;



    case 4 :
     printf("\n\nSelection of Eligible for Voting or Not\n");
     printf("\nEnter your Age = ");
     scanf("%d",&age);

     if(age >= 18 && age <= 70)
     {
         printf("\nGreat! You can Vote");
     }
     else if(age >= 70)
     {
         printf("\nSorry! You cannot Vote, Voting is allowed till age 70");         
     }
     else
     {
         printf("\nSorry! You cannot Vote, Voting is allowed above age 18");
     }
     break ;
     
    default :
     printf("\nInvalid Input");
     
 }


    return 0 ;
}