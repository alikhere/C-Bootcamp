#include<stdio.h> 
int main()
{
    float x,amount=0,Total=0;
    printf("Enter your units: ");
    scanf("%f",&x);
    switch(x<=50)
    {
        case 1: amount= x*0.5;
                break;
        case 0: switch(x<=150)
                {
                    case 1: amount= 25+(x-50)*0.75;
                    break;
                    case 0: switch(x<=250)
                    {
                        case 1: amount= 100+(x-150);
                        break;
                        case 0: amount= 220+(x-250)*1.5;
                        break;
                    }
                    break;
                }
                break;        
    }
    Total= amount+amount*0.20;
    printf("Total amount is Rs. %.2f\n",Total);
    return 0;
}