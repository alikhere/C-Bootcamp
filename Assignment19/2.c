#include<stdio.h>
int main()
{
    int i,j;
  char str[10][20],temp[20];
  printf("Enter the Ten city name\n");
  for(i=0;i<10;i++)
  gets(str[i]);
  for(i=0;i<9;i++)
  {
      for(j=i;j<9;j++)
      if(strcmp(str[i],str[j+1])>0)
         {
             strcpy(temp,str[i]);
             strcpy(str[i],str[j+1]);
             strcpy(str[j+1],temp);
         }
        
  }
   printf("Sorted strings: \n");
   for(i=0;i<10;i++)
   printf("%s\n",str[i]);
   return 0;
}