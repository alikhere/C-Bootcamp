#include<stdio.h>
int main()
{
    int i,j;
  char str[3][20];
  printf("Enter the three strings\n");
  for(i=0;i<3;i++)
  fgets(str[i],20,stdin);
  printf("Displaying\n");
  for(i=0;i<3;i++)
   printf("%s",str[i]);
   return 0;
}