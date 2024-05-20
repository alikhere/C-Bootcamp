#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter three coefficient of quadraric equation: ");
    scanf("%f %f %f",&a,&b,&c);
    switch((b*b-4*a*c)>0)
    {
          case 1: printf("Roots are %f and %f",(-b+sqrt(b*b-4*a*c))/2*a,(-b-sqrt(b*b-4*a*c))/2*a);
                  break;
          case 0: switch((b*b-4*a*c)<0)
          {
                           case 1: printf("Roots are %f+%fi and %f-%fi",-b/2*a,sqrt(4*a*c-b*b)/2*a,-b/2*a,sqrt(4*a*c-b*b)/2*a);
                            break;   
                            case 0: printf("Roots are %f and %f",-b/2*a,-b/2*a); 
                            break;
          }
          break;
    }      
    return 0;
}
