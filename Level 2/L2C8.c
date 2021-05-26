#include <stdio.h>

int main()
{
    int prodid, billid, quantity;
    float price, totprice;
    scanf("%d\n %d", &billid, &prodid);
    scanf("%f\n%d", &price, &quantity);
    totprice = price * quantity;
    printf("%.2f", totprice);
    return 0;
}