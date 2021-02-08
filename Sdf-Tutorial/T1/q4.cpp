#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter 3 digit number : ";
    cin>>a;
    cout<<endl;
    int n=a/100;
    int m=a%100;
    int l=m/10;
    int k=m%10;
    cout<<"Number before Reversing = "<<a<<endl;
    cout<<"Number after Reversing = "<<((k*100)+(l*10)+n)<<endl;
    return 0;
}