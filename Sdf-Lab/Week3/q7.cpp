# include<iostream>
using namespace std;
class student
{
    int m1,m2;
    float avg;

public:
    student()
    {
        m1=55;
        m2=65;
    }
    void calculateAverage(student s)
    {
        float total=s.m1+s.m2;
        avg=total/3;
        cout<<"Average is : "<<avg;
    }
};
//end of class

int main()
{
    student s1;
    s1.calculateAverage(s1);
}