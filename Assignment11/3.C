#include<stdio.h>
int checkP(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(checkP(n))
    printf("%d is a prime number\n",n);
    else
     printf("%d is not a prime number\n",n);
return 0;
}

int checkP(int num)
{
    int i;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}