#include<stdio.h>
#include<string.h>
struct Marks input();
void Avg(struct Marks);
struct Marks
{
    int rollno;
    char name[20];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};
int main()
{  
    int i;
    struct Marks b[5];
    for(i=0;i<5;i++)
    {
        printf("For student %d: ",i+1);
        b[i]=input();
    }
    for(i=0;i<5;i++)   
    Avg(b[i]);
    return 0;
}
struct Marks input()
{

    struct Marks a;
    char dummy; // using a dummy char.to empty buffer coz. fflush is not working in linux os
    printf("Enter roll no, name, chem.marks, maths marks, phy.marks: \n");
    scanf("%d",&a.rollno);
    scanf("%c",&dummy);
    fgets(a.name,20,stdin);
    scanf("%f",&a.chem_marks);
    scanf("%f",&a.maths_marks);
    scanf("%f",&a.phy_marks);
    a.name[strlen(a.name)-1]='\0';
    return a;
}
void Avg(struct Marks a)
{
    float avg=(a.chem_marks+a.maths_marks+a.phy_marks)/3.0;
printf("%s: %.f%%\n",a.name,avg);
}