#include <stdio.h>

int main()
{
    int note50, note20, note10, note5, note2, note1, amount;
    int remain;
    scanf("%d", &amount);
    if (amount >= 1)
    {

        note50 = amount / 50;
        remain = amount % 50;
        note20 = remain / 20;
        remain = remain % 20;
        note10 = remain / 10;
        remain = remain % 10;
        note5 = remain / 5;
        remain = remain % 5;
        note2 = remain / 2;
        remain = remain % 2;
        note1 = remain / 1;
    }
    printf("50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d", note50, note20, note10, note5, note2, note1);

    return 0;
}