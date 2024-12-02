// Write a C program to check whether a number is palindrome or not.

#include<stdio.h>
int main()
{
    int num, org_num = 0, rev = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    org_num = num;

    while(num != 0)
    {
        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }

    printf("\nOriginal Number: %d", org_num);
    printf("\nReversed Number: %d\n", rev);

    if(org_num == rev)
    {
        printf("\nOriginal number %d and Reversed number %d are same", org_num, rev);
        printf("\nSo, %d is a palindrome number", rev);
    }
    else
    {
        printf("\nOriginal number %d and Reversed number %d are not same", org_num, rev);
        printf("\nSo, %d is not a palindrome number", rev);
    }
    return 0;
}