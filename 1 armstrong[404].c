# include<stdio.h>
# include<math.h>
void check(int);
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    check(n);
}
void check(int r)
{
    int t,d,c=0,sum=0;
    t=r;
    while(r!=0)
    {
        c++;
        r=r/10;
    }
    printf("%d",c);
    r=t;
    while(r>0)
    {
        d=r%10;
        sum=sum+pow(d,c);
        r=r/10;
    }
printf("%d",sum);
    if(sum==t)
        printf("arm");
    else
        printf("no");
}
