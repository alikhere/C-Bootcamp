#include<stdio.h>
#include<string.h>
struct student input();
void Display(struct student);
struct student
{
    int rollno;
    char name[20];
    float cgpa;
};
int main()
{  
    int i,n;
    printf("Enter no of students\n");
    scanf("%d",&n);
    struct student b[n];
    for(i=0;i<n;i++)
        b[i]=input();
    for(i=0;i<n;i++)   
    Display(b[i]);
    return 0;
}
struct student input()
{

    struct student a;
    char dummy; // using a dummy char.to empty buffer coz. fflush is not working in linux os
    printf("Enter roll no, name, and cgpa of student\n");
    scanf("%d",&a.rollno);
    scanf("%c",&dummy);
    fgets(a.name,20,stdin);
    scanf("%f",&a.cgpa);
    a.name[strlen(a.name)-1]='\0';
    return a;
}
void Display(struct student a)
{
printf("%d %s %f\n",a.rollno,a.name,a.cgpa);
}