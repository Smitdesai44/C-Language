#include<stdio.h>

float c2f(float);

float c2f(float c)
{
    return ((9 * c ) / 5)  + 32;
}

int main()
{
    float a ;

    printf("\nEnter the temperature in celcius = ");
    scanf("%f", &a);

    float fah = c2f(a);

    printf("Celsius to fahrenheit is %.2f", fah);
    return 0 ;
}