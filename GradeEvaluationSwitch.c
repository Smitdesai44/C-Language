#include<stdio.h>
int main()
{
 char grade ;

 printf("\nEnter the grade you've got (In Capital Letters) = ");
 scanf("%c",&grade);

 switch(grade)
 {
     case 'A':
     printf("\nExcellent");
     break ;

     case 'B':
     printf("\nGood");
     break ;

     case 'C':
     printf("Fair");
     break ;

     case 'D':
     printf("Poor");
     break ;

     case 'F':
     printf("Fail");
     break ;

     default :
     printf("Invalid Input");
 }

    return 0 ;
}