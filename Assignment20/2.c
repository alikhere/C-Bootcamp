#include<stdio.h>
void swap(char**,char**);
int main()
{
    char *s1[10],*s2[10];
    printf("Enter two string: ");
    gets(s1);
    gets(s2);
    swap(&s1,&s2);
    printf("%s %s\n",s1,s2);
    return 0;  
}
void swap(char **p , char **q)
{
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;
}