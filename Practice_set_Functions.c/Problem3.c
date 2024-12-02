#include<stdio.h>

float force(float);

float force(float mass)
{
    return mass * 9.8 ;
}

int main()
{
    float m ;

    printf("\nEnter Mass = ");
    scanf("%f", &m);

    // float mass = force(m);

    //function calling is done inside printf
    printf("The value of force is %.2f", force(m));
    return 0 ;
}