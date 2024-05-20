#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,a,b,c;
while(1)
{
printf("\nEnter your choice\n");
printf("1. To check isosceles Tringles\n");
printf("2. To check Right angle Tringles\n");
printf("3. To check Equilateral Tringles\n");
printf("4. Exit\n");
scanf("%d",&x);
printf("Enter three sides of triangle\n");
scanf("%d %d %d",&a,&b,&c);
switch(x)
{
    case 1: if((a==b && b!=c)||(b==c && c!=a)||(a==c && a!=b))
              printf("isosceles");
              else
              printf("Not an isosceles");
              break;
    case 2:  if(a*a==b*b+c*c || b*b==c*c+a*a || b*b==a*a+b*b)
              printf("Right Triangle");
              else
              printf("Not a right triangle");
             break;
    case 3:  if(a==b && b==c)
              printf("Equilateral Triangle");
              else
              printf("Not a Equilateral Triangle");
              break;
    case 4:  exit(0);          
    default:
              printf("Invalid input\n");
}
}

return 0;

}