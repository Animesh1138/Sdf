#include <iostream>
using namespace std;
int main()
{
    struct phone
    {
        float price,rating;
        int bpw;
    };
    phone p1,p2;
    cout<<"Enter Phone1 details:"<<endl<<"Enter Price:"<<endl;
    cin>>p1.price;
    cout<<"Enter Battery Power(In mAh):"<<endl;
    cin>>p1.bpw;
    cout<<"Enter Rating(between 0-5):"<<endl;
    cin>>p1.rating;
    cout<<"Enter Phone2 details:"<<endl<<"Enter Price:"<<endl;
    cin>>p2.price;
    cout<<"Enter Battery Power(In mAh):"<<endl;
    cin>>p2.bpw;
    cout<<"Enter Rating(between 0-5):"<<endl;
    cin>>p2.rating;
    if(p1.price>p2.price)
    {
        cout<<"Phone better w.r.t Price is Phone2"<<endl;
    }
    else
    {
        cout<<"Phone better w.r.t Price is Phone1"<<endl;
    }
    if(p1.bpw>p2.bpw)
    {
        cout<<"Phone better w.r.t Battery Power is Phone1"<<endl;
    }
    else
    {
        cout<<"Phone better w.r.t Battery Power is Phone2"<<endl;
    }
    if(p1.rating>p2.rating)
    {
        cout<<"Phone better w.r.t Rating is Phone1"<<endl;
    }
    else
    {
        cout<<"Phone better w.r.t Rating is Phone2"<<endl;
    }
    return 0;
}