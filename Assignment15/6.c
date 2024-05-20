#include<stdio.h>
int input(int[],int );
int main()
{
    int least,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    input(a,n);
    
    return 0;
}
int input(int b[],int n)
{ int i;
     for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
    
}