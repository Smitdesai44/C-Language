// Solution 1

#include <stdio.h>
int main()
{
    char ch[11];
    printf("Enter the 10 characters: ");

    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &ch[i]);
    }
    ch[10] = '\0';

    printf("Vowels are: ");

    for (int i = 0; i < 10; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {
            printf("%c ", ch[i]);
        }
    }
    return 0;
}

// #include <stdio.h>

// int main() {
//     char ch[11]; // 10 characters + 1 for the null terminator
//     printf("Enter 10 characters: ");
    
//     for (int i = 0; i < 10; i++) {
//         scanf(" %c", &ch[i]); // Use &ch[i] to store the character
//     }
//     ch[10] = '\0'; // Null-terminate the string

//     printf("Vowels are: ");
//     for (int i = 0; i < 10; i++) {
//         if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||
//             ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') 
//         {
//             printf("%c ", ch[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }
