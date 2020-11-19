# include<stdio.h>
int power(int ,int);
void main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
}
int power(int x,int y)
{
    if(y==0)
        return 1;
    else
        return (x*power(x,y-1));
}
