#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",(n-1)+(m-1)+((n-1)*(m-1)*2));
    return 0;
}