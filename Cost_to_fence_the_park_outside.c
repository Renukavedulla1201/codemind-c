#include<stdio.h>
int main()
{
    int L,B,W,C,F,l1,b1;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    l1=L+2*W;
    b1=B+2*W;
    F=((l1*b1)-(L*B))*C;
    if(l1<=0||b1<=0)
    printf("impossible");
    else
    printf("%d",F);
    return 0;
}