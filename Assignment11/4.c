#include<stdio.h>
int nextP(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Next prime number is %d\n",nextP(n));
return 0;
}

int nextP(int num)
{
    int i,k,j;
    k=num+1;
    while(1)
    {
        for(i=2;i<=k;i++)
        {
            if(k%i==0)
            break;
        }
        if(i==k)
        return k;
        else
        k++;
    }
}