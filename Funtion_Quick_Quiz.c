#include<stdio.h>

// Funtion Declaration or Function Prototype

void good_morning();
void good_afternoon();
void good_evening();

// Funtion Definition

void good_morning()
{
    printf("good morning\n");
}
void good_afternoon()
{
    printf("good afternoon\n");
}
void good_evening()
{
    printf("good evening\n");
}

int main()
{
    // Funtion Calling
    
    good_morning();
    good_afternoon();
    good_evening();
    return 0 ;
}
