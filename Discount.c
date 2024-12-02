// Just printing discounts
#include<stdio.h>
int main()
{
 int pAmt ;
 printf("Enter your purchased amount here! = ");
 scanf("%d",&pAmt);
 if(pAmt >= 1000)
  {
     printf("\nGreat! You'll get 30 percent Discount");
  }
  else if(pAmt >= 500)
  {
     printf("\nGreat! You'll get 20 percent Discount");
  }
  else if(pAmt >= 250)
  {
     printf("\nGreat! You'll get 10 percent Discount");
  }
  else
  {
     printf("\nSorry! No Discount Available");
  }

    return 0 ;
}