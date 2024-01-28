#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
        This challenge will help you to learn how to take a character, a string and a sentence as input in C.
    */
    char ch;
    char string[10];
    char text[25];

    scanf("%c", &ch);
    scanf("%s", &string);
    scanf("\n%[^\n]*c%", &text);

    printf("%c\n", ch);
    printf("%s\n", string);
    printf("%s\n", text);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
