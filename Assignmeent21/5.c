#include<stdio.h>
#include<string.h>
struct Employee input();
void Display(struct Employee);
struct Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    struct Employee b[10];
    int i,n;
    printf("Enter no of employee\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       b[i]=input();
    sort(b,n);
    for(i=0;i<n;i++)   
       Display(b[i]);
    return 0;
}
struct Employee input()
{

    struct Employee a;
    char dummy; // using a dummy char.to empty buffer coz. fflush is not working in linux os
    printf("Enter employee id, name, and salary\n");
    scanf("%d",&a.id);
    scanf("%c",&dummy);
    fgets(a.name,20,stdin);
    scanf("%f",&a.salary);
    a.name[strlen(a.name)-1]='\0';
    return a;
}
void Display(struct Employee a)
{
printf("%d %s %.2f\n",a.id,a.name,a.salary);
}
void sort(struct Employee b[], int size)
{
    int i,j;
    struct Employee temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(b[j].salary>b[j+1].salary)
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
}