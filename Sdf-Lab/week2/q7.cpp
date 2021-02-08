#include <iostream>
using namespace std;
int main()
{
    int n,i,found=0,val;
    cout << "No. of Elements Inserted\n";
    cin>>n;
    int a[n];
    cout<<"Enter Elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Which value to be find : ";
    cin>>val;
    //Linear Searching
    for(i=0;i<n;i++)
    if(val==a[i])
    {
        found=1;
        cout<<val<<" is found at the position "<<i+1<<endl;
    }
    if(found=0)
    cout<<"Not Found";
    return(0);
}