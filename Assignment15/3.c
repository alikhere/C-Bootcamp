#include<stdio.h>
void sort(int[],int);
int main()
{
    int n,i;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int a[n];
    sort(a,n);
    printf("sorted array: ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}


void sort(int b[],int n)
{
    int i,j,temp;
    printf("Enter the element of array:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
}