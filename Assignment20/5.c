#include<stdio.h>
int main()
{
    int x,y,*p=&x,*q=&y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    *p > *q ? printf("maximum no: %d\n",*p) : printf("maximum no: %d\n",*q);
    return 0;
}