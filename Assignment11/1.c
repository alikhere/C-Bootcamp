#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y;
    printf("Enter two numbers: \n");
    scanf("%d %d",&x,&y);
    printf("LCM of given numbers is %d\n",lcm(x,y));
    return 0;
}
int lcm(int x,int y)
{
    int i,s;
    s=x<y?x:y;
    for(i=s;i<=x*y;i++)
    {
       if(i%x==0 && i%y==0)
       return i;
    }
}