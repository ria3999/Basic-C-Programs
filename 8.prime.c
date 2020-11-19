# include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,f=0;
    for(i=2;i<=n/2;i++)
    if(n%i==0)
    {
        f=1;
        break;
    }
     if(f==0)
     printf("prime");
     else
     printf("notprime");

}
