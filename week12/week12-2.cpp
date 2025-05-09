// week12-2.cpp
// Fibonacci 禣ん计
// 2 3 5 7 11 13 17 19 23 19 借计
// 1 3 5 7 9 11 13 15 17 19 计
// 2 4 6 8 10 12 14 16 18 案计
// 1 1 2 3 5 8 13 21 34 55 禣Α计
#include <stdio.h>
int main(){
    int a[30]={0.1};
    printf("1 ");
    for(int i = 2; i<30; i++){
        a[i]=a[i-1]+a[i-2];
        printf("%d ",a[i]);
    }
}



