#include<stdio.h>
int fact(int);
int main()
{
int i,n,sum=0;
printf("Enter the no of terms:");
scanf("%d",&n);
   for(i=1;i<=n;i++)
{
sum=sum+fact(i)/i;
}
printf("sum of series is %d\n",sum);
  return 0;
}

int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact=fact*i;
        return fact;
}
