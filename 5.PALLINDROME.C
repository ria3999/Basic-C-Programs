# include<stdio.h>
void pallin(void)
{
    int n,t,rev=0,d;
    printf("enter a number");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==t)
        printf("pallin");
    else
        printf("not");
}
main()
{
    pallin();
}
