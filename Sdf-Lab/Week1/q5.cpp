
#include <iostream>
using namespace std;
int main()
{
    int n,d=2,t=0,k=0,z=0,c=0;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(c==0)
    {
        c=1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                c=0;
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    while(k==0&&(arr[n-1]>=d))
    {
        t=0;
        for(int i=2;i<=d/2;i++)
        {
            if(d%i==0)
            {
                t++;
                break;
            }
        }
        if(t==0)
        {
            z=1;
            for(int m=0;m<n;m++)
            {
                if(arr[m]==d)
                {
                    z=0;
                    break;
                }
            }
            if(z==1)
            {
                cout<<"Missing Prime number is : "<<d<<"...";
                k=1;
            }
        }
    d++;
    }
    if(z==0)
    cout<<"No prime number missing";
return 0;
}