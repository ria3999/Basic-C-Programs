# include<stdio.h>
void main()
{
    int ar[90],i,n,l,*p;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter array elements");
    p=ar;
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=n-1;i>=0;i--)
        printf("%d",*(p+i));
}
