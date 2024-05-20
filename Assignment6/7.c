#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=0;
    while(n)
    {
    n=n/10;
    i++;
    }
    printf("%d ",i);
    return 0;

}