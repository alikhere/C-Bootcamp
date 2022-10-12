#include<stdio.h>
void prime(int,int);
int main()
{
    int l,h;
    printf("Enter two numbers: \n");
    scanf("%d %d",&l,&h);
    prime(l,h);
    return 0;
}
void prime(int l,int h)
{
    int i,j;
    for(i=l+1;i<=h-1;i++)
    {
        for(j=2;j<i;j++)
          if(i%2==0)
            break;
        if(j==i)
        printf("%d ",i);    

    }
}