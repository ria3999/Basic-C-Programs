# include<stdio.h>
void main()
{
    char str[90];
    int l,i,j,f=0;
    printf("enter a string");
    gets(str);
    l=strlen(str);
    i=0;
    j=l-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
    }
    if(f==1)
        printf("not pallindrm");
    else
        printf("pallindrome");
}
