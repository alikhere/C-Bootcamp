#include<stdio.h>
int PrintN(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=PrintN(n);
    printf("sum of n natural no is %d\n",sum);
   return 0;
}
int PrintN(int n)
{
if(n==1)
return 1;
return n+PrintN(n-1);
}