#include<stdio.h>
#include<stdio.h>
void rchar(char str[]);
int main()
{
    char str[20],a;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    rchar(str);
    return 0;
}  
void rchar(char str[])
{
    int i,j,l,count;
    printf("The repeated characters in the string are\n");
    l=strlen(str)-1;
    for(i=0;i<l;i++)
    {
    count=0;
      for(j=i+1;j<l;j++)
        {
         if(str[i]==str[j] && str[i]!=' ')
            { count++;
             str[j]=0; }
        }
    if(count!=0 && str[i]!='\0')
     printf("%c\n",str[i]);
    }
}
