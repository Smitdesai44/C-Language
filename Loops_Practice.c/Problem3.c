#include<stdio.h>
int main()
{
    char ch;

    int i = 97;

    while(i <= 122)
    {
        ch = i;
        printf("%c\t", ch);
        i++;
    }
    return 0;
}