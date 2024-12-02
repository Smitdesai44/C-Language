//1 . Find average of three numbers

#include<stdio.h>

//Function prototype 
float average(int , int , int);

//Function definition
float average(int x , int y , int z)
{
    return (x + y + z) / 3.0;
}

int main()
{
    int a  , b , c ;
    printf("\nEnter three numbers = ");
    scanf("%d %d %d", &a, &b, &c);

    //Funtion call
    float avg = average(a , b , c); 

    printf("The average of numbers entered is %.2f\n", avg);
    return 0 ;
}