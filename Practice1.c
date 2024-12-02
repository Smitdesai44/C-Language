#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // For n1

    if (n1 > n2 && n1 > n3)
    {
        printf("\n%d is greater than %d and %d", n1, n2, n3);
    }
    else if (n1 > n2 && n1 == n3)
    {
        printf("\n%d is greater than %d but equal to %d", n1, n2, n3);
    }
    else if (n1 == n2 && n1 > n3)
    {
        printf("\n%d is equal to %d and greater than %d", n1, n2, n3);
    }

    // For n2

    if (n2 > n3 && n2 > n1)
    {
        printf("\n%d is greater than %d and %d", n2, n3, n1);
    }
    else if (n2 > n3 && n2 == n1)
    {
        printf("\n%d is greater than %d but equal to %d", n2, n3, n1);
    }
    else if (n2 == n3 && n2 > n1)
    {
        printf("\n%d is equal to %d and greater than %d", n2, n3, n1);
    }
    
    // // For n3

    if (n3 > n1 && n3 > n2)
    {
        printf("\n%d is greater than %d and %d", n3, n1, n2);
    }
    else if (n3 > n1 && n3 == n2)
    {
        printf("\n%d is greater than %d but equal to %d", n3, n1, n2);
    }
    else if (n3 == n1 && n3 > n2)
    {
        printf("\n%d is equal to %d and greater than %d", n3, n1, n2);
    }

    // If all the numbers are equal

    if (n1 == n2 && n1 == n3)
    {
        printf("%d is equal to %d and %d", n1, n2, n3);
    }

    return 0;
}