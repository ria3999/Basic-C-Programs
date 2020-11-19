#include<stdio.h>
void main()
{
    int n,m,*p,*q;
    printf("enter 2 no.");

    scanf("%d%d",&n,&m);
    p=&n;
    q=&m;
    printf("addition=%d",*p+2);
    printf("subtraction=%d",*p-2);
    printf("increment=%d",++(*p));
    printf("decrement=%d",--(*p));
    printf("sub2pointer=%d",*p-*q);

}
