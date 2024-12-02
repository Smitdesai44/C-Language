#include<stdio.h>

struct Time { 
    int hours; 
    int minutes; 
    int seconds; 
}; 
 
int main() { 
    struct Time t1, t2, result; 
     
    // Input first time 
    printf("Enter the first time (hours minutes seconds): "); 
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds); 
 
    // Input second time 
    printf("Enter the second time (hours minutes seconds): "); 
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds); 
 
    // Add seconds and handle overflow 
    result.seconds = t1.seconds + t2.seconds; 
    result.minutes = t1.minutes + t2.minutes + result.seconds / 60; 
    result.seconds %= 60; 
 
    // Add minutes and handle overflow 
    result.hours = t1.hours + t2.hours + result.minutes / 60; 
    result.minutes %= 60; 
 
    // Display the result 
    printf("\nSum of the times: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds); 
 
    return 0; 
}