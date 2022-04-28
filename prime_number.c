#include<stdio.h>
int main()
{
    int n,flag=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            flag+=1;
        }
    }
    if(flag==1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}