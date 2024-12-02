#include<stdio.h>
void change_to_ten_times(int); // function prototype

void change_to_ten_times(int j) // function definition
{
    j = j * 10 ; 
}
int main()
{
    int i = 5 ; // initialisation

    printf("\nThe value of i is %d", i); 
   
    change_to_ten_times(i); // function calling 
  
    printf("\nThe value of i is %d", i);   

    return 0 ;
}