#include <stdio.h> 
 
 
struct Book  
{ 
    char title[50]; 
    char author[50]; 
    float price; 
}; 
 
int main()  
{ 
    struct Book books[3]; 
    int i, mostExpensive = 0, leastExpensive = 0; 
 
     
    for (i = 0; i < 3; i++)  
    { 
        printf("Enter title, author, and price for book %d: ", i + 1); 
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price); 
    } 
 
     
    for (i = 1; i < 3; i++)  
    { 
        if (books[i].price > books[mostExpensive].price) 
            mostExpensive = i; 
        if (books[i].price < books[leastExpensive].price) 
            leastExpensive = i; 
    } 
 
     
    printf("\nMost Expensive Book: %s by %s, Price: %.2f\n", books[mostExpensive].title, books[mostExpensive].author, books[mostExpensive].price); 
 
     
    printf("Least Expensive Book: %s by %s, Price: %.2f\n", books[leastExpensive].title, books[leastExpensive].author, books[leastExpensive].price); 
 
    return 0; 
}