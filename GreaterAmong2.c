#include<stdio.h>
int main()
{
 int num1 , num2 ;   
 printf("\nEnter 2 Numbers : ");
 scanf("%d%d",&num1,&num2);
 if(num1 > num2)
 {
    printf("%d is greater than %d",num1,num2);
 }
 else if(num2 > num1)
 {
    printf("%d is greater than %d",num2,num1);
 }
 else
 {
    printf("%d and %d is equal number",num1,num2);
 }

    return 0 ;
}

