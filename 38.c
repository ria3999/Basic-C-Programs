# include<stdio.h>
void main()
{
    char str[90],t;
    int i,j,l;
    printf("enter a string");
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(str[j]>str[j+1])
            {

            t=str[j];
            str[j]=str[j+1];
            str[j+1]=t;
            }
        }
    }

    puts(str);
}
