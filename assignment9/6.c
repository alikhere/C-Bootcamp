#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter year: ");
    scanf("%d",&x);
    switch(x%100==0)
    {
    case 1: switch(x%400==0)
               {
                   case 1: printf("Leap Year");
                   break;
                   case 0: printf("Not a Leap Year");
                   break;
               }
               break;
    case 0: switch(x%4==0)
               {
                   case 1: printf("Leap Year");
                   break;
                   case 0: printf("Not a Leap Year");
                   break;
               }
    }
    return 0;
}