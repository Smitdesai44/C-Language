#include<stdio.h>
int main()
{
 int day ;
 printf("\nEnter the months which you want print = ");
 scanf("%d",&day);

 if(day == 30)
 {
     printf("\nMonths = April , June , September and November");
 }
 else if(day == 31)
 {
     printf("\nMonths = January , March , May , July , August , October and December");
 }
 else if(day == 28 || day == 29)
 {
     printf("\nFebruary");
 }
 else 
 {
     printf("\nInvalid Input");
 }

    return 0 ;
}