#include<stdio.h>
int main()
{
    int i,k,l=0;
    char str[20],a;
    printf("Enter the string: ");
    gets(str);
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
      {
        k=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=k;
      }
    printf("%s\n",str);  
    return 0;
}  
