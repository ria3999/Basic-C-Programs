# include<stdio.h>
void main()
{
    char str1[90],str2[90];
    int i;
    printf("enter a string");
    gets(str1);
    gets(str2);
    for(i=0;str2[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
    puts(str1);
    puts(str2);

}
