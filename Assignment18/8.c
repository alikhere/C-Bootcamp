#include<stdio.h>
int count(char str[]);
int main()
{
    char str[20],a;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("Number of words in given string is %d\n",count(str)); 
    return 0;
}  
int count(char str[])
{
    int i,k=0;
    for(i=0;str[i];i++)
      {
        if(str[i]==' ')
          k++;
      }
      return k+1;
}
