#include<stdio.h>
void print(int);
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    print(x);
    return 0;
}
void print(int x)
{
    int i;
   for(i=1;i<=x;i++)
   printf("%d ",i);
}