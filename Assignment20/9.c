#include<stdio.h>
void Prev(int*,int);
int main()
{
    int i,l,a[20];
    printf("Enter no of element in array: ");
    scanf("%d",&l);
    printf("Enter element: ");
    for(i=0;i<l;i++)
    scanf("%d",&a[i]);
    Prev(a,l);
    return 0;  
}
void Prev(int *p, int l)
{
    int i;
    for(i=l;i;i--)
    printf("%d ",*(p+i-1));
}