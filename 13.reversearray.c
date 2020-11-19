# include<stdio.h>
void main()
{
    int a[90],n,i;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    reverse(a,n);
}
void reverse(int a[],int n)
{
    int i=0,j,t;
    j=n-1;
    while(i<j)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        i++;
        j--;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
