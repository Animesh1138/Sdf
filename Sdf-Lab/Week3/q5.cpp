# include<iostream>
using namespace std;
class second	
{
    int person_id;

public:
    void display (int x)
    {
        cout<<"Entered data is :"<<x<<endl<<endl;
    }
    second ()
    {
        person_id=1002;
        display(person_id);
    }
    second (int x)
    {
        person_id=x;
        display(person_id);
    }
};
// end of class

int main()
{
    second obj1;
    second obj2(200);
}