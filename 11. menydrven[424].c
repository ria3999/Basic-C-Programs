# include<stdio.h>
int main()
{
    char ch;
    printf("choose an option");
    scanf("%c",&ch);
    switch(ch)
    {
    case'1':
        areaofcircle();
        break;
    case'2':
        areaofrectangle();
        break;
    case'3':
        checkoddeven();
        break;
    case'4':
        fibonacciseries();
        break;
    /*case'5':
        exit();
        break;
    }*/
}
void areaofcircle(void)
{
    int r;
    float area;
    printf("enter a radius");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("%f",area);
}
void areaofrectangle(void)
{
    float area,l,b;
    printf("enter length and breadth");
    scanf("%f%f",&l,&b);
    area=l*b;
    printf("%f",area);
}
void checkoddeven(void)
{
    int n;
    printf("enter a  number");
    scanf("%d",&n);
    if(n%2==0)
        printf("even");
    else
        printf("odd");
}
void fibonnaciseries(void)
{
    int n,a=0,b=1,i,c;
    printf("enter the limit");
    scanf("%d",&n);
    printf("%d\n%d",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
/*int exit(void)
{
    return;
}*/
