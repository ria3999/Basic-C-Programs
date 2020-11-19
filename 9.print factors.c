# include<stdio.h>
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printfact(n);
}
void printfact(int n)
{
    int i;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        printf("%d\n",i);
    }
}
