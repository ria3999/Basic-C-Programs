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
        return(fact(n)+sumofseries(n-1));
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
