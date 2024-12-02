#include<stdio.h>
int main()
{
 int num ;
 printf("\nEnter a Number = ");
 scanf("%d",&num);
 if(num % 3 == 0 && num % 5 == 0)
  {
     printf("C Language");
  }
  else if(num % 3 == 0)
  {
     printf("C");
  }
  else if(num % 5 == 0)
  {
     printf("Language");
  }
  else
  {
     printf("Number not divisible");
  }
 
 return 0 ;
}