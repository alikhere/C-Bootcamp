#include<stdio.h>
void PrintFabo(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    PrintFabo(n);
    return 0;
}
 void PrintFabo(int n)
{
    if(n>0)
    {
    PrintFabo(n-1);
    printf("%d ",n)
    }
}