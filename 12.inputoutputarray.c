# include<stdio.h>
void main()
{
    input();

}
void input(void)
{
    int ar[90],n,i;
    printf("enter the lim]it");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
        display(ar,n);
         printcube(ar,n);
}
void display(int b[90],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d",b[i]);
}
void printcube(int b[90],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        b[i]=b[i]*b[i]*b[i];
       // printf("\n%d",b[i]);
    }
     display(b,n);
}
