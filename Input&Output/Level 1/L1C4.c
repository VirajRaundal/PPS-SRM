#include<stdio.h>

int main(){
    int n,m,a;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &a);
    printf("%d",(n-a+1)/a*(m+a-1)/a);
    return 0;
}