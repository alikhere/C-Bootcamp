#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
    printf("Enter your choice: \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Divison\n");
    printf("5.exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("Sum is %d\n",a+b);
        break;
         case 2:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("Difference is %d\n",a-b);
        break;
         case 3:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        printf("Product is %d\n",a*b);
        break;
         case 4:
        printf("Enter two numbers\n");
        scanf("%d %d",&a,&b);
        if(b==0)
         printf("Division by zero error\n");
         else
        printf("Quotient is %d\n",a/b);
        break;
        case 5:
        exit(0);
        default:
        printf("Invalid choice");
    }
}
return 0;
}