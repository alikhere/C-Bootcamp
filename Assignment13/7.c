#include<stdio.h>
int PrintHcf(int,int);
int main()
{
    int a,b,x,y,hcf;
    printf("Enter two number: ");
    scanf("%d %d",&x,&y);
    b=x>y?x:y;
    a=x<y?x:y;
    hcf=PrintHcf(a,b);
    printf("Hcf of given no is %d\n",hcf);
   return 0;
}
int PrintHcf(int a,int b)
{
if(a==0)
return 0;
return b%a+PrintHcf(b%a,a);
}