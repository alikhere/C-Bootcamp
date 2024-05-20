#include<stdio.h>
int PrintOdd(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=PrintOdd(n);
    printf("sum of n odd natural no is %d\n",sum);
   return 0;
}
int PrintOdd(int n)
{
if(n==1)
return 1;
return 2*n-1+PrintOdd(n-1);
}