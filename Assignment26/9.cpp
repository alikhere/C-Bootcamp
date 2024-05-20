#include<iostream>
using namespace std;
class Bill
{
    private:
    float unit;
    public:
    void get()
    {
        cout<<"Enter unit: ";
        cin>>unit;
    }
    void calculateBill()
    {
        float amount;
        if(unit<=100)
        amount=unit*1.2;
        else
        {
            if(unit<=200)
            amount=unit*2;
            else
            amount=unit*3;
        }
        cout<<"Total amount: "<<amount<<endl; 
    }

};
int main()
{
    Bill c;
    c.get();
    c.calculateBill();
    return 0;
}