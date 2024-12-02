#include<stdio.h>
#include<string.h>

int main()
{
    char ch[] = "smit";
    char s1[10] = "Hello";
    char s2[10] = "All";

    // printf("%d", strlen(ch)); // excludes null character

    char target[30];

    strcpy(target,ch); // target now contains smit

    // printf("%s %s", ch , target);

    strcat(s1,s2); // s1 now contains "helloall" <no space in between>

    printf("%s", s1);
    return 0;
}