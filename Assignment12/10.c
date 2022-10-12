#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int num)
{
if(num>0)
{
    printf("%d",num%10);
    reverse(num/10);
}
}