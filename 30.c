# include<stdio.h>
void main()
{
    char str[90];
    int count=0,i;
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='\n'||str[i]=='\t'||str[i]==' ')
            count++;
    }
    printf("no. of words=%d",count);
}
