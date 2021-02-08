#include <iostream>
using namespace std;
int main()
{
    int n,i,l,t;
    int a[50];
    int *p=a;
    cout << "No. of Elements Inserted\n";
    cin>>n;
    cout<<"Enter Elements\n";
    for(i=0;i<n;i++){
        cin>>*(p+i);}
    cout<<"Orginal Array : ";
    for(i=0;i<n;i++){
        cout<<*(p+i)<<" ";}
    //Sslection Sorting
    for(i=0;i<n;i++){
        for(l=i+1;l<n;l++){
            if(*(p+i)>*(p+l))
            {
                t=*(p+i);
                *(p+i)=*(p+l);
                *(p+l)=t;
            }
        }
    }
    cout<<"\nAfter Sorting Array: ";
    for(i=0;i<n;i++)
        cout<<*(p+i)<<" ";
    cout<<"\nAfter Reverse Sorted Array";
    for(i=n-1;i>=0;i--)
        cout<<*(p+i)<<" ";
    return 0;
}