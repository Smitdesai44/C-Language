#include<stdio.h>

typedef struct C
{
    int real;
    int imaginary;
}Complex;

void display(Complex );

void display(Complex c)
{
    printf("The value of Complex number is %d + %di\n", c.real , c.imaginary);
}

int main()
{
    Complex carr[5];
    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter real part: ");
        scanf("%d", &carr[i].real);
        printf("\nEnter imaginary part: ");
        scanf("%d", &carr[i].imaginary);

        display(carr[i]);
    }

    
    return 0;
}