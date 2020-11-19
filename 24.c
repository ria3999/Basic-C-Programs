# include<stdio.h>
void main()
{
    char str[90];
    int i,count=0;
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
        count++;
    printf("%d",count);
}
