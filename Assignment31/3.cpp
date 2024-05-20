#include <iostream>
using namespace std;
 class Marks
 {
    protected:
    float m1,m2;    

    public:
    void Input()
    {
        cout<<"Enter marks of two sunjets: ";
        cin>>m1>>m2;

    }
 };

 class Total : public Marks
 {
    protected:
    float sum;
    
    public:
    void Sum()
    {
        sum = m1+m2;
    }
 };

 class Average : public Total
 {
    public:
    void Percent()
    {
        cout<<"Percentage: "<<(sum/200.0)*100<<"%"<<endl;
    }
 };

 int main()
 {
    Average a;
    a.Input();
    a.Sum();
    a.Percent();
    return 0;
 }