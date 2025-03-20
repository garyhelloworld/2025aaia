///weel04-3
///試各種for迴圈
#include <stdio.h>
int main()
{
    int n = 5;
    for(int i = 0 ; i<n ; i++)
    {
        printf("%d ",i);
    }///電腦從0開始
    printf("\n");

    for(int i = 1 ; i<=n ; i++)
    {
        printf("%d ",i);
    }///人類從0開始
    printf("\n");

    for(int i = n-1 ; i>=0 ; i--)
    {
        printf("%d ",i);
    }///倒過來的迴圈

}

