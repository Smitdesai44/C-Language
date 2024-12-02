#include<stdio.h>
int main()
{

    printf("\nOdd Numbers between 1 to 100 are: ");

    int i = 1;

    while(i <= 100)
    {
        if(i % 2 != 0)
        {
            printf("\n%d", i);
        }
        i++;
    }
            
    return 0;
}