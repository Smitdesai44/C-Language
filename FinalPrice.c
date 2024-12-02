// Final Price after Discount
#include<stdio.h>
int main()
{
 float ogp , fp , disp ;
 printf("Enter Original Price = ");
 scanf("%f",&ogp);
 printf("\nEnter Discount Percentage = ");
 scanf("%f",&disp);

 disp = ogp * disp / 100 ;
 fp = ogp - disp ;

 printf("\nYour final price is %f",fp);

    return 0 ;
}