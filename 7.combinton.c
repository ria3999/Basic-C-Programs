# include<stdio.h>
void main()
{
    int n,r,z;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    z=fact(n)/(fact(n-r)*fact(r));
    printf("%d",z);

}
int fact(int n)
{
    int i,res=1;

    for(i=1;i<=n;i++)
        res=res*i;
    return(res);
}
