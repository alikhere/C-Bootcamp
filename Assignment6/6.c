#include<stdio.h>
int main()
{
    int i=1,n,fac=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n)
    {
        fac=fac*i;
        i++;
    }
    printf("%d ",fac);
    return 0;
}