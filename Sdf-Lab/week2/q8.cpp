 #include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No. of Students\n";
    cin>>n;
    float *cgpa=new float[n];
    cout<<"Enter Students CGPA (b/w 1-10)\n";
    for( int i=0;i<n;i++ )
    {
        cout<<"Student "<<i+1<<" CGPA is : ";
        cin>>*(cgpa+i);
    }
    cout<<"\nDisplay\n";
    for( int i=0;i<n;i++ )
    {
        cout<<"Student "<<i+1<<"CGPA is : ";
        cout<<*(cgpa+i)<<" ";
        cout<<endl;
    }
    return 0;
}