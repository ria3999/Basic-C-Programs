# include<stdio.h>
void sumofseries(int);
int fact(int);
void main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    sumoseries(n);
}
void sumofseries(int n)
{
    int i,res=1;
    float sum=0;
    for(i=1;i<=n;i++)
    {
     sum=sum+(i/fact(i));
    }
    printf("%f",sum);
}
int fact(int j)
{
    int res=1,i;
    for(i=1;i<=j;i++)
        res=res*i;
    return(res);
}

