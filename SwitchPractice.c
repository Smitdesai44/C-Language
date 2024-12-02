#include<stdio.h>
int main()
{
 int choice , a , b ;

 printf("\n...Menu...\n");
 printf("\n1. Addition");
 printf("\n2. Substraction");
 printf("\n3. Multiplication");
 printf("\n4. Division\n");

 printf("\nEnter your Choice = ");
 scanf("%d",&choice);

 switch(choice)
 {
    case 1:
     printf("\nEnter two Numbers a = and b = ");
     scanf("%d%d",&a,&b);

     printf("%d + %d = %d",a,b,a+b);
    break ;

    case 2:
     printf("\nEnter two Numbers a = and b = ");
     scanf("%d%d",&a,&b);

     printf("%d - %d = %d",a,b,a-b);
    break ;

    case 3:
     printf("\nEnter two Numbers a = and b = ");
     scanf("%d%d",&a,&b);

     printf("%d * %d = %d",a,b,a*b);
    break ;

    case 4:
     printf("\nEnter two Numbers a = and b = ");
     scanf("%d%d",&a,&b);

     printf("%d / %d = %d",a,b,a/b);
    break ;

    default:
     printf("\nInvlaid Input");
 }

    return 0 ;
}