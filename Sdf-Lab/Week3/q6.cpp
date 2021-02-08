# include<iostream>
using namespace std;

class area
{
    float l,b,a;

public:
    void getdim()
    {
        cout<<"Enter the length : ";
        cin>>l;
        cout<<"Enter the breadth : ";
        cin>>b;
    }

    float getarea()
    {
        return l*b;
    }
};
// end of class

int main()
{
    area a;
    a.getdim();
    float ar=a.getarea();
    cout<<endl<<"The area is :"<<ar;
}