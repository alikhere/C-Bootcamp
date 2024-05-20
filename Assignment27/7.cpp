
#include <iostream>
using namespace std;

class fraction
{
    private:
    long nume;
    long deno;

    public:
    fraction(long n=0, long d=0)
    {
        nume= n;
        deno = d;
    }
    friend void operator>>(istream &input, fraction &f)
    {
        cout<<"\nNumerator:    ";
        input>>f.nume;
        cout<<"\nDenominator:   ";
        input>>f.deno;
        cout<<endl;

    }

    friend void operator<<(ostream &output, fraction &f)
    {
        output<<f.nume<<"/"<<f.deno<<endl;

    }

    fraction operator++(int demo)
    {
        fraction temp = *this;
        this -> nume++;
        this -> deno++;
        return temp;
    }

    fraction operator++()
    {
        ++nume;
        ++deno;
        return(*this);
    }

};

int main()
{
    fraction f1,f2;
    cout<<"\nf1   :   ";
    cout<<f1;
    cout<<"\nf2   :   ";
    cout<<f2;
    
    cout<<"Enter first fraction value";
    cin>>f1;
    cout<<f1;
    f1++;
    cout<<"\nf1++   :   ";
    cout<<f1;
    ++f1;
    cout<<"\n++f1   :   ";
    cout<<f1;

    cout<<"Enter second fraction value";
    cin>>f2;
    
    f2 = ++f1;
    cout<<"\nf1 = ++f1\nf1   :   ";
    cout<<f1;
    cout<<"\nf2   :   ";
    cout<<f2;

    f2 = f1++;
    cout<<"\nf1 = f1++\n\nf1   :   ";
    cout<<f1;
    cout<<"\nf2   :   ";
    cout<<f2;
    cout<<endl;
    return 0;

}