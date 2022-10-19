#include<stdio.h>
int main()
{
    int i,j,l;
    char str[20],temp;
    printf("Enter the string: ");
    scanf("%s",str);
    for(l=0;str[l];l++);
    for(i=0;i<l-1;i++);
       {
           for(j=0;j<l-i-1;j++)
             {
                 if(str[j]>str[j+1])
                   {
                       temp=str[j];
                       str[j]=str[j+1];
                       str[j+1]=temp;
                   }
             }
       }
        printf("Sorted string: %s\n",str);
        return 0;
}



/* #include<stdio.h>
struct book
{
    int a;
    char b[10];
    float c;
};
int main()
{
   char k=-32;

   struct book d;
   scanf("%d",&d.a);
   
   fgets(d.b,10,stdin);
   scanf("%f",&d.c);
    printf("%d %s %f",d.a,d.b,d.c);
    return 0;
}
*/