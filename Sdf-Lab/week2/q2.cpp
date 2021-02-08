/*//2.1
#include <iostream>
using namespace std;
int main()
{
    int a[3]={10,100,200};
    int *p;
    p=a;
    for(int i=0;i<3;i++)
    {
        cout<<"Address of var["<<i<<"]=";
        cout<<p<<endl;
        cout<<"Value of var["<<i<<"]=";
        cout<<*p<<endl;
        p++;
    }
    delete p;
    return 0;
}*/

//2.2
#include <iostream>
using namespace std;
int main()
{
    int a[3]={10,100,200};
    int *p=&a[3-1];
    for(int i=3;i>0;i--)
    {
        cout<<"Address of var["<<i<<"]=";
        cout<<p<<endl;
        cout<<"Value of var["<<i<<"]=";
        cout<<*p<<endl;
        p--;
    }
    delete p;
    return 0;
}

