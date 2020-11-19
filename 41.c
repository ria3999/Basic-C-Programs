# include<stdio.h>
void main()
{
    int a,b,*p,*q;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    swap(p,q);
    printf("%d%d",a,b);
}
int swap(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    return(*p,*q);
}
