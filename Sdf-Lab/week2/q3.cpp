/*#include <iostream>
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
    return 0;
}
*/
//......
#include <iostream>
using namespace std;
int main()
{
    int n;
    float cgpa[50];
    cout<<"No. of Students\n";
    cin>>n;
    cout<<"Enter Students CGPA (b/w 1-10)\n";
    for( int i=0;i<n;i++ )
    {
        cout<<"Student "<<i+1<<" CGPA is : ";
        cin>>cgpa[i];
    }
    cout<<"\nDisplay\n";
    for( int i=0;i<n;i++ )
    {
        cout<<"Student "<<i+1<<"CGPA is : ";
        cout<<cgpa[i]<<" ";
        cout<<endl;
    }
    return 0;
}
