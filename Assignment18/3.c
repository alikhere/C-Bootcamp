#include<stdio.h>
int cmp(char str1[],char str2[]);
int main()
{
    char str1[20],str2[20];
    printf("Enter the first string: ");
    scanf("%s",str1);
    printf("Enter the second string: ");
    scanf("%s",str2);
    if(cmp(str1,str2))
       printf("Given two strings are different\n");
    else
       printf("Given two string are same\n");   
    return 0;   
}
int cmp(char str1[] , char str2[])
{
    int i,l;
    for(i=0;str1[i];i++);
    for(l=0;str2[l];l++);
    l=i>l ? i : l;
    for(i=0;i<l;i++)
      {
        if(str1[i]!=str2[i])
        return 1;
      }
      return 0;

}