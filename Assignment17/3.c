#include<stdio.h>
int main()
{
    int i,k=0;
    char str[20],a;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
       if((str[i]=='a') || (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u') || (str[i]=='A') || (str[i]=='E') || (str[i]=='I') || (str[i]=='O') || (str[i]=='U'))
          k++;
    printf("Numer of vowels is %d\n",k);
    return 0;    
}
