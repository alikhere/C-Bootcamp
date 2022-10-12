#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers: \n");
    scanf("%d %d",&x,&y);
    printf("HCF of given numbers is %d\n",hcf(x,y));
    return 0;
}
int hcf(int x,int y)
{
    int a,b,rem;
    b=x>y?x:y;
    a=x<y?x:y;
    while(rem)
    {
        rem=b%a;
        b=a;
        a==rem;
    }
    return b;
}