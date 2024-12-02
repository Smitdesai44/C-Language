#include<stdio.h>
#include<string.h>
// Declaring structure
struct Student
{
    char name[50];
    int id;
    int class;
};

int main()
{
    // declaring structure variable
    struct Student s;
    printf("\nData of first student\n");

    // initializing the member variable individually

    strcpy(s.name , "Rahul");
    s.id = 101;
    s.class = 1;

    // Accesing the member variables

    printf("\nStudent Name: %s", s.name);
    printf("\nStudent Id: %d", s.id);
    printf("\nStudent Class: %d\n", s.class); 

    printf("\nData of second student\n");

    strcpy(s.name , "Smit");
    s.id = 102;
    s.class = 2;

    printf("\nStudent Name : %s", s.name);
    printf("\nStudent ID : %d", s.id);
    printf("\nStudent Class : %d", s.class);  
    return 0 ;
}
