#include<stdio.h>
void p_factor(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    p_factor(n);
    return 0;
}
void p_factor(int n)
{
   int i;
   for(i=2;i<=n;i++)
   {
       while(n%i==0)
       {
         if(n%i==0)
          {
            printf("%d ",i);
            n=n/i;
          }
       }
   }
}