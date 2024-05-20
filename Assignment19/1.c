#include<stdio.h>
int vovel(char str[]);
int main()
{
    int i;
  char str[5][20];
  printf("Enter the five strings\n");
  for(i=0;i<5;i++)
  fgets(str[i],20,stdin);
  for(i=0;i<5;i++)
  {
      printf("Number of vovels in %s is %d\n",str[i],vovel(str[i]));
  }
return 0;
}
int vovel(char str[])
{
int i,k=0;
for(i=0;str[i];i++)
  {
    if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
          k++;
  }
  return k;
}