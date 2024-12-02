// 1. Table of a Number from user.

// #include<stdio.h>
// int main()
// {
//     int n ;

//     printf("\nEnter a number = ");
//     scanf("%d", &n);

//     for(int i = 1 ; i <= 10 ; i++)
//     {
//         printf("\n%d x %d = %d", n , i , n*i);
//     }
//     return 0 ;
// }

// 2. Table of 10 in reverse oreder

// #include<stdio.h>
// int main()
// {
//     int n = 10 ;

//     for(int i = n ; i >= 1 ; i--)
//     {
//         printf("\n%d x %d = %d", n , i , n*i);
//     }
//     return 0 ;
// }

// 5. Sum of first 10 numbers using while loop

// #include<stdio.h>
// int main()
// {
//     int i  = 1 , sum = 0 ;
//     while(i <= 10)
//     {
//         sum +=i ;
//         i++ ;
//     }
//     printf("\nUsing while loop");
//     printf("\nThe total sum of first ten numbers is %d", sum);
//     return 0 ;
// }

// 6. Do this above program using for loop and do-while loop

// #include<stdio.h>
// int main()
// {
//     int i = 1 , sum = 0 ;
//     // do-while loop
//     do
//     {
//         sum += i ;
//         i++ ;
//     } while (i <= 10);
//     printf("\nUsing do-while loop");
//     printf("\nThe total sum of first ten numbers is %d", sum);

//     return 0 ;
// }

// #include<stdio.h>
// int main()
// {
//     int sum = 0 ;
//     // using for loop
//     for(int i = 1 ; i <= 10 ; i++)
//     {
//         sum += i ;
//     }
//     printf("\nUsing for loop");
//     printf("\nThe total sum of first ten numbers is %d", sum);
//     return 0 ;
// }

// 7. Sum of table of 8

// #include<stdio.h>
// int main()
// {
//     int sum = 0 ;

//     for(int i = 1 ; i <= 10 ; i++)
//     {
//         sum += (8 * i);
//     }
//     printf("\nThe sum of table of 8 is %d", sum);
// }

// 8. Factorial of n numbers

// #include<stdio.h>
// int main()
// {
//     int product = 1 , n ;

//     printf("\nEnter a number = ");
//     scanf("%d", &n);

//     for(int i = 1 ; i <= n ; i++)
//     {
//         product *= i ;
//     }
//     printf("The factorial of %d is %d", n , product);
//     return 0 ;
// }

// 9 . Factorial using while loop

// #include<stdio.h>
// int main()
// {
//     int product = 1 , n ;

//     printf("\nEnter a number = ");
//     scanf("%d", &n);

//     int i = 1 ;
//     while(i <= n)
//     {
//         product *= i ;
//         i++ ;
//     }
//     printf("The factorial of %d is %d", n , product);

//     return 0 ;
// }

// 10. Prime or not

#include <stdio.h>
int main()
{
    int n, not_prime = 0;

    printf("\nEnter a number = ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not prime", n);
    }
    else
    {
        printf("%d is prime", n);
    }
    return 0;
}

// 10. Prime or not easy method

// #include<stdio.h>
// int main()
// {
//     int cnt = 0 , i , n ;

//     printf("\nEnter a number");
//     scanf("%d", &n);

//     for(i = 1 ; i <= n ; i++)
//     {
//         if(n % i == 0)
//         {
//             cnt++;
//         }
//     }
    
//     if(cnt == 2)
//     {
//         printf("%d is a prime number\n", n);
//     }
//     else
//     {
//         printf("%d is not a prime number\n", n);
//     }
//     return 0 ;
// }