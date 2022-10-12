#include<stdio.h>
float si(float,float r,float);
int main()
{
    float p,r,t,interest;
    printf("Enter Principle amount: \n");
    scanf("%f",&p);
    printf("Enter interest rate: \n");
    scanf("%f",&r);
    printf("Enter time: \n");
    scanf("%f",&t);
    interest=si(p,r,t);
    printf(" simple interest is %.2f\n",interest);
    return 0;
}
float si(float p, float r, float t)
{
    float SI=(p*r*t)/100;
    return SI;
}