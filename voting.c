// Using ternary Operator
#include<stdio.h>
int main()
{
    int age ;

    printf("ENter your age = ");
    scanf("%d",&age);

    (age >= 18) ? printf("Can Vote") : printf("Cannot Vote");

 return 0 ;
}

// Using if-else statement
#include<stdio.h>
int main()
{
 int age ;

 printf("\nEnter your Age = ");
 scanf("%d",&age);

 if(age >= 18)
 {
     printf("Yes! You can Vote");
 }
 else 
 {
     printf("Sorry! You cannot Vote");
 }


    return 0 ;
}