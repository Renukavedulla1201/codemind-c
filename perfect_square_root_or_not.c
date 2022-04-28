#include<stdio.h>
int main()
{
    int n,i,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*i==n)
        {
            p=1;
            break;
        }
    }
    if(p==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}