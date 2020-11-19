# include<stdio.h>
void main()
{
    char str[90],t;
    int l,i,j;
    printf("enter a string");
    gets(str);
    l=strlen(str);
    i=0;
    j=l-1;


        while(i<j)
        {
            t=str[i];
            str[i]=str[j];
            str[j]=t;
            i++;
            j--;
        }
    puts(str);
}
