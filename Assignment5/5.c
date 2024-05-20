#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    printf("%d ",2*i-1);
    return 0;
}