///week10-2.cpp ブ猭
#include <stdio.h>
int main (){
    printf("块俱计:");
    int n;
    scanf("%d",&n); //ex 块397
    ///printf("计琌 %d\n,n%10");
    ///printf("计琌 %d\n,n/10%10");
    ///printf("κ计琌 %d\n,n/100%10");
    while (n>10){
        printf("计%dブ挤%d\n", n, n%10);///ブ
        n = n / 10;///计跑 跑1/10
    }

}
