#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter array element: \n");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]%2==0)
      se=se+a[i];
      else
      so=so+a[i];
    }
    printf("sum of all even no is %d \n",se);
    printf("sum of all odd no is %d \n",so);
    return 0;
}