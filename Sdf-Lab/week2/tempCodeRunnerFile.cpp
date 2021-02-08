 
#include <iostream>
using namespace std;
int main()
{
    int n,i,s=0;
    cout << "No. of Elements Inserted\n";
    cin>>n;
    int a[n];
    cout<<"Enter Elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Sum of all Elements\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"+";
        s=s+a[i];
    }
    cout<<"\b= "<<s;
    return(0);
}