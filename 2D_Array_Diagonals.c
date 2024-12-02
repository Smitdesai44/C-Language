#include<stdio.h>
int main()
{
    int arr[3][3];
    int i , j ;

    printf("\nEnter the values of matrix = ");
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(i == j || i + j == 2)
            {
                printf("%d\t", arr[i][j]);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }

    int sum_right_dia = 0 , sum_left_dia = 0 ;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(i == j )
            {
                sum_left_dia += arr[i][j];
            }
        }
    }
    printf("\nSum of left diagonal is = %d", sum_left_dia);

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(i + j == 2 )
            {
                sum_right_dia += arr[i][j];
            }
        }
    }
    printf("\nSum of right diagonal is = %d\n", sum_right_dia);


    
    return 0 ;
}
                
    
    