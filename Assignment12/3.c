#include<stdio.h>
void printOdd(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printOdd(n);
    return 0;
}
void printOdd(int n)
{
    if(n>0)
    {
        printOdd(n-1);
        printf("%d ",2*n-1);
    }

}