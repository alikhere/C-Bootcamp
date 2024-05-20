#include<stdio.h>
int main()
{
int x;
printf("\nEnter varible: ");
scanf("%d",&x);
switch(x==1)
{
    case 1: printf("good\n");
              break;
    case 0:  switch(x==2)
            {
                case 1:  printf("better\n");
                break;
                case 0:  switch(x==3)
                         {
                             case 1: printf("best\n");
                             break;
                             case 0: printf("invalid\n");
                             break;
                         }
                         break;
            }
            break;
}
return 0;
}
