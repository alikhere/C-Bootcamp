#include<stdio.h>
int Count(int);
int main()
{
    int n,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    k=Count(n);
    printf("Number of digits %d\n",k);
   return 0;
}
int Count(int n)
{
    if(n==0)
    return 0;
    return 1+Count(n/10);
}