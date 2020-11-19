# include<stdio.h>
void main()
{
    char str1[90],str2[90];
    int l1,l2,i,j;
    printf("enter string 1");
    gets(str1);
    printf("enter string 2");
    gets(str2);
    l1=strlen(str1);
    l2=strlen(str2);
    j=0;
    for(i=l1;i<=l2+l1;i++)
    {


        str1[i]=str2[j];
        j++;
    }
        str1[i]='\0';
    puts(str1);

}
