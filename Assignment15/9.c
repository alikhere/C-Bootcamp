#include<stdio.h>
void sort(int[],int);
void Merge(int a[],int b[],int c[],int n);
int main()
{
    int n,i,a[20],b[20],c[40];;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter the element of first array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element of second array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    sort(a,n);
    sort(b,n);
    Merge(a,b,c,n);
    printf("Array after merging: ");
    for(i=0;i<2*n;i++)
    printf("%d ",c[i]);
    return 0;
}


void sort(int b[],int n)
{
    int i,j,temp;
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

void Merge(int a[],int b[],int c[],int n)
{
    int i=0,j=0,k=0;
while(i<=n)
{
    if(a[i]>b[j])
    {
        c[k++]=b[j];
        j++;
    }
    else
    {
        c[k++]=a[i];
        i++;
    }
}
}