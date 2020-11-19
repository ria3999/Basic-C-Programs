# include<stdio.h>
void main()
{
    char str[90];
    int i,vowel=0,consonant=0,special=0,number=0;
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
        {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowel++;
            else
            consonant++;
        }
        else if(str[i]>=48&&str[i]<=57)
            number++;
        else
            special++;
    }
    printf("%d%d%d",vowel,consonant,special);
}
