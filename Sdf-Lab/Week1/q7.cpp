/*#include <iostream>
using namespace std;
int main()
{
    struct str
    {
        char name[20];
        int age;
        float salary;
    };
    str s;
    cout<<"Enter Full name: ";
    gets(s.name);
    cout<<"Enter age: ";
    cin>>s.age;
    getchar();
    cout<<"Enter salary: ";
    cin>>s.salary;
    cout<<endl<<"Displaying information"<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Age: "<<s.age<<endl;
    cout<<"Salary: "<<s.salary<<endl;
return 0;
}
*/

//7.1
#include <iostream>
using namespace std;
int main ()
{
    struct str
    {
        char name[20];
        int age;
        float salary;
    };
    float basic, hra, book, fur, spcl;
    str s;
    s.salary=0.0;
    cout<<"Enter Full name: ";
    gets(s.name);
    cout<<"Enter age: ";
    cin>>s.age;
    cout<<"Enter salary Components"<<endl;
    cout<<"Basic: ";
    cin>>basic;
    cout<<"HRA: ";
    cin>>hra;
    cout<<"BOOK Allowance: ";
    cin>>book;
    cout<<"Furniture Allowance: ";
    cin>>fur;
    cout<<"Special Allowance: ";
    cin>>spcl;
    s.salary=basic+hra+book+fur+spcl;
    cout<<"Total Salary ="<<s.salary<<endl;
    return 0;
}