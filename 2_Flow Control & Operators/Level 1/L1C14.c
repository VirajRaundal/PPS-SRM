#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();
    if ((ch >= 'a') && (ch <= 'z'))
        printf("ALPHABET");
    else if ((ch >= 'A') && (ch <= 'Z'))
        printf("ALPHABET");
    else
        printf("NOT AN ALPHABET");
    return 0;
}