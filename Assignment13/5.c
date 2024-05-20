#include<stdio.h>
int SumDigit(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum=SumDigit(n);
    printf("sum of digits is %d\n",sum);
   return 0;
}
int SumDigit(int n)
{
if(n==0)
return 0;
return n%10+SumDigit(n/10);
}