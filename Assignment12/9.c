#include<stdio.h>
void octal(int);
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
octal(n);
return 0;
}
void octal(int N)
{
  if(N>0)
  {
      octal(N/8);
      printf("%d ",N%8);
  }
}