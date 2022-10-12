#include<stdio.h>
int check(int);
int main()
{
    int x,y;
    printf("Enter number: ");
    scanf("%d",&x);
    if(check(x))
    printf("Even\n");
    else
    printf("Odd");
    return 0;

}
int check(int x)
{
   return x%2==0?1:0;
}