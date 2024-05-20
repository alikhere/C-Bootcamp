#include<stdio.h>
int main()
{
    int i=0,n;
  char str[10][20],a[20];
  printf("Enter the no of string\n");
  scanf("%d",&n);
  printf("Enter strings\n");
  for(i=0;i<n+1;i++)
  gets(str[i]);
  printf("Enter string to be search \n");
  gets(a);
  for(i=0;i<n+1;i++)
  {
        if(strcmp(str[i],a)==0)
           break;
  }
    if(i!=n+1)
      printf("String is founded\n");
   else
     printf("String is not founded\n");
   return 0;
}