#include<stdio.h>
int main()
{
    int a,b,j=1;
    scanf("%d",&a);
    scanf("%d",&b);
    while(j>0)
    {
        if(j%a==0&&j%b==0)
        {
            printf("%d",j);
            break;
        }
        j++;
    }
    return 0;
}