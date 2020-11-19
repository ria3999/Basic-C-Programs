# include<stdio.h>
void main()
{
    char str[90],*p,t;
    int l,i,j;
    printf("enter a string");
    gets(str);
    p=str;
    l=strlen(str);
    i=0;
    j=l-1;
    while(i<j)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
        i++;
        j--;
    }
    puts(str);
}
