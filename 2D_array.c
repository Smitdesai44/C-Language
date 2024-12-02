//sum of even odd 

// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     int i, j;

//     printf("\nEnter the matrix = ");
//     for (i = 0; i < 3; i++)
//     {
//         for(j = 0 ; j < 3 ; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     int sum_even = 0 , sum_odd = 0 ;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (arr[i][j] % 2 == 0)
//             {
//                 sum_even += arr[i][j];
//             }
//             else
//             {
//                 sum_odd += arr[i][j];
//             }
//         }
//     }
//     printf("Sum of even numbers is %d\n", sum_even);
//     printf("Sum of odd numbers is %d", sum_odd);

//     return 0;
// }

//Left Diagonal Sum

#include<stdio.h>
int main()
{
    int arr[3][3];
    int i , j ;
    
    // Input matrix
    printf("\nEnter the matrix = ");
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // print diagonal matrix
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
          if(i == j)
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

    // sum of diagonal matrix
    int sum_left_dia = 0;
    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            if(i == j)
            {
                sum_left_dia += arr[i][j];
            }
        }
    }
    printf("Sum of left diagonal is %d", sum_left_dia);
    return 0 ;
}

// Right diagonal sum

// #include<stdio.h>
// int main()
// {
//     int arr[3][3] ;
//     int i , j ;

//     // Input Matrix
//     printf("\nEnter the matrix =");
//     for(i = 0 ; i < 3 ; i++)
//     {
//         for(j = 0 ; j < 3 ; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // print diagonal matrix
//     for(i = 0 ; i < 3 ; i++)
//     {
//         for(j = 0 ; j < 3 ; j++)
//         {
//           if(i + j == 2)
//           {
//              printf("%d\t", arr[i][j]);
//           }    
//           else
//           {
//             printf("\t");
//           }
//         }
//         printf("\n");
//     }

//     // sum of diagonal matrix
//     int sum_right_dia = 0 ;
//     for(i = 0 ; i < 3 ; i++)
//     {
//         for(j = 0 ; j < 3 ; j++)
//         {
//             if(i + j == 2)
//             {
//                 sum_right_dia += arr[i][j];
//             }
//         }
//     }
//     printf("\nSum of right diagonal is = %d\n", sum_right_dia);
//     return 0 ;
// }