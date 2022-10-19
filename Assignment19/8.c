#include<stdio.h>
int main()
{
  int i,j,temp=0,min=50,w1=-1,w2=-1,n;
  char str[10][20],word1[20],word2[20];
  printf("Enter the no of string\n");
  scanf("%d",&n);
  printf("Enter strings\n");
  for(i=0;i<n+1;i++)
  gets(str[i]);
  printf("Enter two words\n");
  scanf("%s%s",word1,word2);
  for(i=0;i<n+1;i++)
  {
       if(strcmp(str[i],word1)==0)
            w1=i;
        if(strcmp(str[i],word2)==0)
            w2=i;

        if(w1!=-1 && w2!=-1)
          {
              temp=abs(w2-w1);
              if(temp<min)
                min=temp;
          }
  }
  printf("Length is %d\n",min-1);
   return 0;
}