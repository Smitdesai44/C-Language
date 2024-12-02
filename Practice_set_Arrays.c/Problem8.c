#include<stdio.h>
int main()
{
    int n1 , n2 , n3 ;
    int arr[3][10];
    int mul[3] ;

    printf("\nEnter three numbers = ");
    scanf("%d %d %d", &n1 , &n2 , &n3);

    mul[0] = n1;
    mul[1] = n2;
    mul[2] = n3;

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 10 ; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("The table of %d\n", mul[i]);
        for(int j = 0 ; j < 10 ; j++)
        {
            printf("%d x %d = %d\n",mul[i] , j + 1 , arr[i][j]);
        }
        printf("\n");
    }
    

    
    return 0 ;
}