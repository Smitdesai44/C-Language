#include<stdio.h>

typedef struct C
{
    int real;
    int imaginary;
}Complex;

int main()
{
    Complex c = {1, 2};

    printf("The value of complex number is %d + %di", c.real , c.imaginary);
    return 0;
}