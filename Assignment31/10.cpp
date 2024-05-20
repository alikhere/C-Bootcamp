#include<iostream>
using namespace std;


class Worker
{
    protected:
    int code;
    char name[10];
    float salary;

    public:
    void Input()
    {
        cout<<"Enter code: ";
        cin>>code;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }

};

class Office
{
    protected:
    float da,hra;

    public:
    void Input()
    {
        cout<<"Enter DA: ";
        cin>>da;
        cout<<"Enter HRA: ";
        cin>>hra;
    }

};

class Manager : public Worker, public Office
{
    protected:
    float GS;

    public:

    void Cal()
    {
        GS = salary + da + hra + (10/100.0)*salary;
    }

    void display()
    {
        cout<<"Code         : "<<code<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Salary       : "<<salary<<endl;
        cout<<"DA           : "<<da<<endl;
        cout<<"HRA          : "<<hra<<endl;
        cout<<"Gross Salary : "<<GS<<endl;
    
    }
};

int main()
{
    int n;
    cout<<"Enter manager count: ";
    cin>>n;
    
    Manager m[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter worker information for "<<i+1<<endl<<"#######################################"<<endl;
        m[i].Worker::Input();
        m[i].Office::Input();
        m[i].Manager::Cal();

    }
    for(int i=0; i<n; i++)
    {
        cout<<"Manager information for "<<i+1
        <<endl;
        m[i].display();
        cout<<"#######################################";

    }

    return 0;
}