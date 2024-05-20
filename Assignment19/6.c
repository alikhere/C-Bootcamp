#include<stdio.h>
int main()
{
    int i,j,n,l;
  char str[10][20],temp[20];
  printf("Enter the no of string\n");
  scanf("%d",&n);
  printf("Enter the strings\n");
  for(i=0;i<n+1;i++)
  gets(str[i]);
  for(i=0;i<n+1;i++)
  {
      l=strlen(str[i]);
       for(j=0;j<l/2;j++)
         {
            if(str[i][j]!=str[i][l-1-j])
               break;
         }
        if(j==l/2)
         printf("%s\n",str[i]);     
  }
   return 0;
}
