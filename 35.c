# include <stdio.h>
void main()
{
    char str[90],substr[90];
    int i,pos,l,l1,j=0;
    printf("enter a string");
    gets(str);
    printf("enter a substring");
    gets(substr);
    printf("enter position");
    scanf("%d",&pos);
    l=strlen(substr);
    l1=strlen(str);
        for(i=l1-1;i>=pos-1;i--)
            str[i+l]=str[i];
     i=pos-1;

            for(j=0;j<l;j++)
            {
                str[i]=substr[j];
                i++;
            }
            str[l1+l]='\0';


    puts(str);
}
