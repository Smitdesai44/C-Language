// Ascending Printing

// #include<stdio.h>
// int main()
// {
//     int x[5];
//     int i , j ;

//     printf("\nEnter Values = ");
//     for(i = 0 ; i < 5 ; i++)b
//     {
//         scanf("%d", &x[i]);
//     }

//     for(i = 0 ; i < 4 ; i++)
//     {
//         for(j = 0 ; j < 4 ; j++)
//         {
//             if(x[j] > x[j + 1])
//             {
//                 int temp = x[j];
//                 x[j] = x[j + 1];
//                 x[j + 1] = temp;
//             }
//         }
//     }
//     for(i = 0 ; i < 5 ; i++)
//     {
//         printf("\nx[%d] = %d", i , x[i]);
//     }
//     return 0 ;
// }


// Descending printing
#include<stdio.h>
int main()
{
    int x[5];
    int i , j ;

    printf("\nEnter Values = ");
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d", &x[i]);
    }

    for(i = 0 ; i < 4 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            if(x[j] < x[j + 1])
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    for(i = 0 ; i < 5 ; i++)
    {
        printf("\nx[%d] = %d", i , x[i]);
    }
    return 0 ;
}