#include<stdio.h>
int count(int a[] , int n);

int count(int a[] , int n)
{
    int no_of_positive = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(a[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int arr[] = {1 , 2 , 3 , -4 , -5 , 6 , -7};

    printf("The no of positive integers is %d", count(arr , 7));
    
    return 0 ;
}