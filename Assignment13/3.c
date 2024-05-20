#include<stdio.h>
int PrintEven(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=PrintEven(n);
    printf("sum of n even natural no is %d\n",sum);
   return 0;
}
int PrintEven(int n)
{
if(n==1)
return 2;
return 2*n+PrintEven(n-1);
}