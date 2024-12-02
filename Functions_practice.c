// #include<stdio.h>

// // Function Prototype
// int sum(int , int);

// // Function Definition
// int sum(int x , int y)
// {
//     printf("\nthe sum is %d", x+y);
//     return x+y;
// }
// int main()
// {
//     // Function Calling
//     sum(1 , 2);
//     sum(12 , 23);
//     sum(2 , 27);
//     return 0 ;
// }

#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();

int main()
{
    good_morning();
    good_afternoon();
    good_night();
    return 0;
}

void good_morning()
{
    printf("\ngood morning");
}
void good_afternoon()
{
    printf("\ngood afternoon");
}
void good_night()
{
    printf("\ngood night");
}