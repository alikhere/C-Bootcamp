#include<stdio.h>
int Count(int[],int);
int main()
{
    int n,i,a[20];
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("No of adjacent duplicate elements is %d\n",Count(a,n));
    return 0;
}

int Count(int b[],int n)
{
int i,Count=0;
    for(i=0;i<n-1;i++)
      if(b[i]==b[i+1])
      Count++;
      return Count;
}