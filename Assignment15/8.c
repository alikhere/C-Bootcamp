#include<stdio.h>
void Unique(int[],int);
int main()
{
    int n,i,a[20];
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    Unique(a,n);
    return 0;
}

void Unique(int b[],int n)
{
int i,j;
printf("Unique elements are: ");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(b[i]==b[j] && i!=j)
        break;
      }
      if(j==n)
      printf("%d ",b[i]);
    }
    
}