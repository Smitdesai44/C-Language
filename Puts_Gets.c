#include<stdio.h>
#include<string.h>

int main()
{
    char ch[30];
    gets(ch); // the entered string is stored in st!

    // printf("%s", ch);

     puts(ch); // printf the output and places the cursor to the next line
     printf("HEY");
    return 0 ;
}

/* difference beween printf and puts() is 
   printf() = it prints the output and keeps the cursor on same line

   puts() = it prints the output and places the cursaor to the next line
*/


/*   printf() example = printf("%s", ch); if entered hii
                      printf("HEY"); if entered smit
    output = hii smit

    puts() example = puts(ch); if entered hii
                     puts(ch); if entered smit
    output = hii
            smit
*/