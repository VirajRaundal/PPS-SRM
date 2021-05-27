#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
        printf("1");
    else if (a % b != 0)
        printf("%d", (a / b) + 1);
    return 0;
}