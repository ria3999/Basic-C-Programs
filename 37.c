# include<stdio.h>
void main()
{
    char str[90],substr[90];
    int count,position,i;
    printf("enter a string");
    gets(str);
    printf("tell the no. of characters to b removed and also the positiin");
    scanf("%d%d",count,position);
    for(i=position-1;i<count-1;i++)
    {
        printf("%c",str[i]);

    }
}
