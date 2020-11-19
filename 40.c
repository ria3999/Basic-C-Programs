# include<stdio.h>
void main()
{
    int ar[90],min,n,*p,i;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter array elements");
    p=ar;
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    min=*p;
    for(i=1;i<n;i++)
    {
        if(*p>*(p+i))
            min=*(p+i);
    }
    printf("%d",min);
}
