# include<stdio.h>
void main()
{
    int ar[90],*p,i,n;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter array elements");
    p=ar;
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        printf("%d",*(p+i));
}
