#include<stdio.h>
int main() 
{
    int array[3][3];
    int sumEven = 0, sumOdd = 0;

    printf("Enter 9 integers for a 3x3 array:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (array[i][j] % 2 == 0) 
            {
                sumEven += array[i][j];
            } 
            else 
            {
                sumOdd += array[i][j];
            }
        }
    }

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}