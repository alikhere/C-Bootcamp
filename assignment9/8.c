#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    switch(x>0)
    {
          case 1: printf("-%d",x);
                  break;
          case 0: if(x<0)
                  printf("%d",-x);
                  else
                  printf("%d",x);

    }      
    return 0;
}