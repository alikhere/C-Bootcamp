#include<stdio.h>
int PrintSq(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=PrintSq(n);
    printf("sum of square of n natural no is %d\n",sum);
   return 0;
}
int PrintSq(int n)
{
if(n==1)
return 1*1;
return n*n+PrintSq(n-1);
}