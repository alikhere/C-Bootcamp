#include<stdio.h>
int power(int,int);
int main()
{
    int base,exp,k;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exp: ");
    scanf("%d",&exp);
    k=power(base,exp);
    printf("Number of digits %d\n",k);
   return 0;
}
int power(int base,int exp)
{
    if(exp==0)
    return 1;
    return base*power(base,exp-1);
}