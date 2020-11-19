# include<stdio.h>
void main()
{
    int n,ar[90],i;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    secondlargest(ar,n);

}
void secondlargest(int a[],int n)
{
    int i,max,smax;
    max=a[0];
    smax=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=max)
        {
            if(smax<a[i])
                smax=a[i];
        }
    }
    printf("%d",smax);

}
