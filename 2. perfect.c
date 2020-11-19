# include<stdio.h>
void check(int);
void main()
{
    int n;
    printf("enter the number to be checked");
    scanf("%d",&n);
    check(n);
}
void check(int r)
{
    int i,sum=0;
   for(i=1;i<=r/2;i++)
   {
       if(r%i==0)
        sum+=i;

   }
   if(sum==r)
   printf("perfect no.");
   else
    printf("not");

}
