# include<stdio.h>
void main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    printf("%d",sumofseries(n));
}
int sumofseries(int n)
{
    if(n==0)
        return 0;
    else
        return(n+sumofseries(n-1));
}
