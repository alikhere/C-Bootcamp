#include<stdio.h>
int check(int,int);
int main()
{
    int n,x;
    printf("Enter number: ");
    scanf("%d",&n);
     printf("Enter digit: ");
    scanf("%d",&x);
    if(check(n,x))
    printf("Digit is present in the number\n");
    else
    printf("igit is not present in the number\n");
    return 0;
}
int check(int n,int x)
{
int rem;
while(n)
{
rem=n%10;
n=n/10;
if(rem==x)
return 1;
}
return 0;
}