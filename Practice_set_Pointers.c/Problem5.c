#include<stdio.h>
int sum(int , int);
float average(int , int);

int sum(int a , int b)
{
    return a+b ;
}

float average(int a , int b)
{
    return (a+b) / 2.0 ;
}
int main()
{
    int n1 , n2;

    printf("\nEnter two numbers = ");
    scanf("%d %d", &n1 , &n2);

    sum(n1 , n2);
    average(n1 , n2);

    printf("\nThe sum is %d\n", sum(n1 , n2));
    printf("The average is %.2f", average(n1 , n2));
    return 0 ;
}

// JUST FOR PRACTICE

// #include<stdio.h>
// int* sum(int , int);
// float* average(int , int);

// int* sum(int a, int b)
// {
//     int s = a+b ;
//     int* ptr = &s;
//     printf("\nThe sum is %d", s);
//     return ptr;
// }

// float* average(int a, int b)
// {
//     float avg = (a+b) / 2.0;
//     float* ptr = &avg;
//     printf("\nThe average is %.2f", avg);
//     return ptr;
// }

// int main()
// {
//     int n1 , n2 ;
//     int* ptr1 ;
//     float* ptr2 ;

//     printf("\nEnter two numbers = ");
//     scanf("%d %d", &n1 , &n2);

//     ptr1 = sum(n1 , n2);
//     ptr2 = average(n1 , n2);

//     printf("\nThe address of sum and of average is %u", ptr1);
//     return 0 ;
// }