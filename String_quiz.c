#include<stdio.h>
int main()
{
    // char ch[] = {'S','M','I','T','\0'};
    char ch[] = "SMIT"; // Same as doing char ch[] = {'S','M','I','T','\0'};

    // for(int i = 0; i < 4; i++)
    // {
    //     printf("\nCharacter is %c", ch[i]);
    // }

    printf("%s", ch); // here if you didn't gave square bracket[] of ch..it will still work
    return 0;
}