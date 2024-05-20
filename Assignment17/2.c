#include<stdio.h>
int main()
{
    int i,k=0;
    char str[20],a;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("Enter the character: ");
    scanf("%c",&a);
    for(i=0;str[i];i++)
       if(str[i]==a)
          k++;
    printf("Number of occurance of given character is %d\n",k);
    return 0;      



}