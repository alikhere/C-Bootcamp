#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}
int factorial(int n)
{
    int i,fac=1;
   for(i=1;i<=n;i++)
   fac=fac*i;
   return fac;
}