#include<iostream>
using namespace std;
class bill
{
    int no;
    float units,c1,c2,c3;
    float total;

public:
    void get()
    {
        cout<<"Enter the consumer No ; ";
        cin>>no;
        cout<<"Enter the no of units consumed :";
        cin>>units;
        calcBill();
        put();

    }
    void calcBill()
    {
        if (units<=100)
        {
            total=c1*units;
        }

        if (units>100 && units<=200)
        {
            total=(100*c1)+(units-100)*c2;
        }

        if (units>200)
        {
            total=(100*c1)+(units-100)*c2+(units-200)*c3;
        }
    }

    void put()
    {
        cout<<"Details are :"<<endl;
        cout<<endl<<"Consumer No : "<<no;
        cout<<endl<<"Units Consumed : "<<units;
        cout<<endl<<"total Bill : "<<total;
    }
    bill()
    {
        c1=5;
        c2=7;
        c3=11;
    }
};

// end of class
int main()
{
    bill b1;
    b1.get();
}