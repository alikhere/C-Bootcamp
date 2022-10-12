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
    Count(a,n);
    return 0;
}

int Count(int b[],int n)
{
int i,j,Count=0;
    for(i=0;i<n;i++)
    {
      for(j=i;j<n;j++)
      {
          if(b[i]==b[j])
          {
              Count++;
          }
      }
      printf("Frequency of %d is %d\n",b[i],Count);
      Count=0;
    }
      return 1;
}