#include<stdio.h>
int fact(int);
int perm(int,int);
int main()
{
    int n,r;
    printf("Enter no of items: ");
    scanf("%d",&n);
    printf("Enter no of selection at a time: ");
    scanf("%d",&r);
    printf("%d\n",perm(n,r));
    return 0;
}
int fact(int n)
{
    int i,fact=1;
   for(i=1;i<=n;i++)
   fact=fact*i;
   return fact;
}
    int perm(int n,int r)
    {
        return fact(n)/fact(n-r);
    }
