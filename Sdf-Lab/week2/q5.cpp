#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int array[n];
    cout<<"Enter elements of array : \n";
    for(int i =0;i<n;i++)
    {
        cin>>array[i];
    }
    int maxno=INT_MIN;
    for(int i =0;i<n;i++)
    {
        maxno=max(maxno,array[i]);
    }
    cout<<"Largest number = "<<maxno<<endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n,i,l,t;
    cout << "No. of Elements Inserted\n";
    cin>>n;
    int a[n];
    cout<<"Enter Elements\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    //Sslection Sorting
    for(i=0;i<n;i++)
    for(l=i+1;l<n;l++)
    if(a[i]>a[l])
    {
        t=a[i];
        a[i]=a[l];
        a[l]=t;
    }
    cout<<"The Largest Elemnet : "<<a[n-1];
    return(0);
}
*/