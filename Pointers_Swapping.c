// call by value

#include<stdio.h>
#include<conio.h>

void swap(int , int);

int main()
{
    int n1 , n2 ;
    printf("\nEnter two values = ");
    scanf("%d %d", &n1, &n2);

    printf("\nBefore Swapping\n");

    printf("n1 = %d\nn2 = %d\n", n1, n2);

    swap(n1 , n2);
 
    getch();

    return 0 ;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("After Swapping\n");

    printf("n1 = %d\nn2 = %d\n", x, y);
}