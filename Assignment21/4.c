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
    int i;
    printf("Enter details of 10 employee\n");
    for(i=0;i<10;i++)
    b[i]=input();
    for(i=1;i<10;i++)
    {
        if(b[0].salary<b[i].salary)
        b[0]=b[i];
    }
    printf("Highest salary employee: ");
    Display(b[0]);
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