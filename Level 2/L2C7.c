#include <stdio.h>

int main()
{
    int billwt;
    float tax, tip, totaltax, totaltip, totalbill;
    scanf("%d", &billwt);
    tax = billwt * 0.18;
    tip = billwt * 0.05;
    totaltax = tax;
    totaltip = tip;
    totalbill = totaltax + billwt + totaltip;
    printf("The Tax is %.2f\nThe Tip is %.2f\nTotal Bill With Tax and Tip is %.2f", totaltax, totaltip, totalbill);

    return 0;
}