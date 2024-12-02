#include <stdio.h>

int fact(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int special(int num) 
{
    int org_no = num;
    int sum = 0;

    while (num != 0) 
    {
        int d = num % 10;  
        int dx = fact(d);  
        sum = sum + dx;  
        num = num / 10;    
    }

    if (org_no == sum) 
    {
        return 1;  
    } 
    else 
    {
        return 0;  
    }
}

int main() 
{
    
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (special(num)) {
        printf("This is a Krishnamurthy number.\n");
    } else {
        printf("This number is not a Krishnamurthy number.\n");
    }

    return 0;
}