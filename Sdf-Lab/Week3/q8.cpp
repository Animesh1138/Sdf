#include<iostream>
# include<string.h>
using namespace std;
class details
{
    char name[50],branch[15];
    int en_no;
    float cgpa;

public:
    void get()
    {
        cout<<"Enter the details :";
        cout<<endl<<"Name :";
        cin>>name;
        cout<<"Branch";
        cin>>branch;
        cout<<"Enrol. No. :";
        cin>>en_no;
        cout<<"CGPA : ";
        cin>>cgpa;
    }

    void display()
    {
        cout<<endl<<endl<<"Details are : "<<endl;
        cout<<"Name : "<<name;
        cout<<endl<<"Branch : "<<branch;
        cout<<endl<<"Enrol. No. : "<<en_no;
        cout<<endl<<"CGPA : "<<cgpa;
    }

    details(char n[],char br[],int en, float c)
    {
        strcpy(name,n);
        strcpy(branch,br);
        en_no=en;
        cgpa=c;
        display();
    }

    details(char n[],int en, float c)
    {
        strcpy(name,n);
        strcpy(branch,"C.S.E");
        en_no=en;
        cgpa=c;
        display();
    }

    details()
    {
        strcpy(name,"Unknown");
        strcpy(branch,"C.S.E");
        en_no=1;
        cgpa=6;
        display();
    }


};
//end of class
int main()
{
    details d1("Any_one","CSE",1,9.8);
    details d2("No_one",1,9.8);
    details d3;

    cout<<endl<<endl;
    details d4;
    d4.get();
    d4.display();
}