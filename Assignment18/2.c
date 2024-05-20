#include<stdio.h>
void rev(char str[]);
int main()
{
    int i,k,l=0;
    char str[20],a;
    printf("Enter the string: ");
    gets(str);   
    rev(str);
    printf("Reverse of given string is %s\n",str);  
    return 0;
}  
void rev(char str[])
{
    int i,l,k;
    for(l=0;str[l];l++);
       for(i=0;i<l/2;i++)
        {
          k=str[i];
          str[i]=str[l-i-1];
          str[l-i-1]=k;
        }
}
