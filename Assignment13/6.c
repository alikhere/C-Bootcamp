#include<stdio.h>
int Printfac(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=Printfac(n);
    printf("factorial of given no is %d\n",sum);
   return 0;
}
int Printfac(int n)
{
if(n==1 || n==0)
return 1;
return n*Printfac(n-1);
}