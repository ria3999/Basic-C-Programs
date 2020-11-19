# include<stdio.h>
void main()
{
    char str[90],*p;
    int count=0,i;
    printf("enter string");
    gets(str);
    p=str;
    for(i=0;*(p+i)!='\0';i++)
    {
        count++;

    }
    printf("%d",count);
}
