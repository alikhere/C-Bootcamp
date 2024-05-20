#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime(n);
return 0;
}

void prime(int N)
{
    int x=2,i;
    while(N)
    {
        for(i=2;i<x;i++);
           if(x%i==0)
           break;
        if(i==x)
        {
            printf("%d",x);
            N--;
        }
        x++;
    
    }


}