#include<stdio.h>
void input(int[],int);
int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    return 0;
}

void input(int b[],int n)
{
    int i;
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);

}