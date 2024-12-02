#include<stdio.h>
int main()
{
 int num1 , num2 , num3 ;
 printf("\nEnter 3 Numbers : ");
 scanf("%d%d%d",&num1,&num2,&num3);
 if(num1 > num2 && num1 > num3)
 {
    printf("%d is greater than %d and %d",num1,num2,num3);
 }
 else if(num2 > num3 && num2 > num1)
 {
    printf("%d is greater than %d and %d",num2,num3,num1);
 }
 else if(num3 > num2 && num3 > num1)
 {
    printf("%d is greater than %d and %d",num3,num1,num2);
 }
 else
 {
    printf("%d and %d and %d are equal numbers",num1,num2,num3);
 }

    return 0 ;
}
