#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(n%2==0)
        cout<<n<<" is Even number.\n";
    else
        cout<<n<<" is Odd number."<<endl;
    return 0;
}