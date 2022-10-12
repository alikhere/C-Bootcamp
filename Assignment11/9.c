#include<stdio.h>
void square(int);
int main()
{
int N;
printf("Enter a number: ");
scanf("%d",&N);
square(N);
return 0;
}

void square(int num)
{
num=num*num;
printf("%d\n",num);
}