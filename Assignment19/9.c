#include<stdio.h>
int main()
{
    int i,n,num,sum=1;
  char str[10][20],a[20];
  printf("Enter the no of username\n");
  scanf("%d",&n);
  printf("Enter list of usernames\n");
  for(i=0;i<n+1;i++)
  gets(str[i]);
  printf("Enter your username\n");
  gets(a);
  for(i=0;i<n+1;i++)
  {
        if(strcmp(str[i],a)==0)
           break;
  }
    if(i!=n+1)
      {
          printf("Enter a number\n");
          scanf("%d",&num);
          for(i=1;i<=num;i++)
            sum=sum*i;
            printf("factorial of given no is %d\n",sum);
      }
   else
     printf("error: Entered user name is wrong\n");
   return 0;
}