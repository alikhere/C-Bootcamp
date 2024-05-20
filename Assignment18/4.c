#include<stdio.h>
void upper(char str[]);
int main()
{
    char str[20],a;
    printf("Enter the string: ");
    gets(str);
    upper(str);
    puts(str);  
    return 0;
}  
void upper(char str[])
{
    int i;
    for(i=0;str[i];i++)
       str[i]=str[i]-32;
}