#include<stdio.h>
#include<string.h>
void Prev(char*,int);
int main()
{
    char i,l,str[20];
    printf("Enter string: ");
    fgets(str,20,stdin);
    l=strlen(str)-1;
    Prev(str,l);
    return 0;  
}
void Prev(char *p , int l)
{
    int i;
    for(i=l;i;i--)
    printf("%c",*(p+i-1));
    printf("\n");
}