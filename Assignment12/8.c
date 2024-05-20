#include<stdio.h>
void binary(int);
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
binary(n);
return 0;
}
void binary(int N)
{
  if(N>0)
  {
      binary(N/2);
      printf("%d ",N%2);
  }
}