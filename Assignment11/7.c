#include<stdio.h>
void fabo(int);
int main()
{
int N;
printf("Enter a number: ");
scanf("%d",&N);
fabo(N);
return 0;
}

void fabo(int n)
{
int i,a=-1,b=1,c;
   for(i=1;i<=n;i++)
     {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
     }
}