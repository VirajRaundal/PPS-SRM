#include <stdio.h>

int main()
{
    int n, r, inner;
    scanf("%d %d", &n, &r);
    if (n >= 10)
        inner = r;
    else
        inner = r + (100 * (10 - n));
    printf("%d", inner);
    return 0;
    return 0;
}