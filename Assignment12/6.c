#include<stdio.h>
void printEven(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printEven(n);
    return 0;
}
void printEven(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        printEven(n-1);
    }

}