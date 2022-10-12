#include<stdio.h>
int comb(int,int);
int fact(int);
int main()
{
int N,i,j;
printf("Enter the no of raw:");
scanf("%d",&N);
for(i=0;i<N;i++)
  {
    for(j=0;j<=i;j++)
       printf("%d ",comb(i,j));
       printf("\n");   
  }
  return 0;
}

int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
        fact=fact*i;
        return fact;
}

int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}