#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,j=0;
    char str[20],*p;
    p=&str;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;*(p+i);i++)
       if((*(p+i)=='a') || (*(p+i)=='e') || (*(p+i)=='i') || (*(p+i)=='o') || (*(p+i)=='u') || (*(p+i)=='A') || (*(p+i)=='E') || (*(p+i)=='I') || (*(p+i)=='O') || (*(p+i)=='U'))
          k++;
        else
          j++;  
    printf("Numer of vowels: %d\nNumber of consonent: %d\n",k,j);
    return 0;    
}
