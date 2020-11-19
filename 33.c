# include<stdio.h>
void main()
{
char str[90],t;
int i,c=0;
printf("enter a string");
gets(str);
printf("enter the alphabet");
scanf("%c",&t);
for(i=0;str[i]!='\0';i++)
{
    if(str[i]==t)
        c++;
}
printf("%d",c);
}
