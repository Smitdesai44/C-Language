#include<stdio.h>
int main()
{
 int month ;
 printf("\nEnter the number between 1 - 12 = ");
 scanf("%d",&month);
 if(month == 1)
 {
    printf("\n%d = JANUARY",month);
 }
 else if(month == 2)
 {
    printf("\n%d = FEBRUARY",month);
 }
 else if(month == 3)
 {
    printf("\n%d = MARCH",month);
 }
 else if(month == 4)
 {
     printf("\n%d = APRIL",month);
 }
 else if(month == 5)
 {
    printf("\n%d = MAY",month);
 }
 else if(month == 6)
 {
    printf("\n%d = JUNE",month);
 }
 else if(month == 7)
 {
    printf("\n%d = JULY",month);
 }
 else if(month == 8)
 {
    printf("\n%d = AUGUST",month);
 }
 else if(month == 9)
 {
    printf("\n%d = SEPTEMBER");
 }
 else if (month == 10)
 {
    printf("\n%d = OCTOBER",month);
 }
 else if(month == 11)
 {
    printf("\n%d = NOVEMBER",month);
 }
 else if(month == 12)
 {
    printf("\n%d = DECEMBER",month);
 }
 else 
 {
    printf("\n%d = INVALID number ....Please enter the number betweeen 1 - 12",month);
 }
    return 0;
}