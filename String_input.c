#include<stdio.h>
int main()
{
    char ch[10];

    // scanf cannot be used to input multi-word strings with spaces
    
    scanf("%s", ch); // here if you didn't give ampercent sign(&) then also it will work
                     // coz ch is already showing the address of string ch.
    printf("%s", ch);                  
    return 0;
}