#include <iostream>
#include <string>
using namespace std;
class TravelPlan
{
    long PlanCode;
    string Place;
    int Number_of_travellers;
    int Number_of_buses;
    public :
    TravelPlan()
    {
        PlanCode=1001;
        Place="Agra";
        Number_of_travellers=5;
        Number_of_buses=1;
    }
    void NewPlan()
        {
            cout<<"Enter Plan code.\n";
            cin>>PlanCode;
            fflush(stdin);
            cout<<"\nEnter Place.\n";
            cin>>Place ;//getline(cin,Place);
            cout<<"\nEnter number of Travllers.\n";
            cin>>Number_of_travellers;
            if(Number_of_travellers<20)
                Number_of_buses=1;
            else if(Number_of_travellers>=20&&Number_of_travellers<40)
                Number_of_buses=2;
            else if(Number_of_travellers>=40&&Number_of_travellers<60)
                Number_of_buses=3;
                else if(Number_of_travellers>=80)
                Number_of_buses=4;
        }
    void ShowPlan()
        {
            cout<<"Route ID : "<<PlanCode;
            cout<<"\nPlace : "<<Place;
            cout<<"\nNumber of passengers : "<<Number_of_travellers;
            cout<<"\nNumber of buses : "<<Number_of_buses;
        }
};
int main()
{
    TravelPlan ob;
    ob.NewPlan();
    ob.ShowPlan();
}