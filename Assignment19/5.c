#include<stdio.h>
int main()
{
    int i,j,n;
  char str[10][20],a[20];
  printf("Enter the no of Email address\n");
  scanf("%d",&n);
  printf("Enter Email address\n");
  for(i=0;i<n+1;i++)
  gets(str[i]);
  for(i=0;i<n+1;i++)
  {
        for(j=0;str[i][j];j++)
        {
           if(str[i][j]=='@')
           break;
        }
        if(str[i][j]==0)
          printf("%s\n",str[i]);
  }
   return 0;
}