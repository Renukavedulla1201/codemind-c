#include<stdio.h>
int main()
{
    int n,r,a,rev=0;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        rev=r+(rev*10);
        n=n/10;
    }
    if(a==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}