#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
         for(j=1;j<=9;j++)
         {
             if(i==5 || i==j-4 || i==6-j)
             printf("*");
             else
             printf(" ");
         }
         printf("\n");
    }
    return 0;
}