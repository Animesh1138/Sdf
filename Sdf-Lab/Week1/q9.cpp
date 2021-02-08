#include <iostream>
using namespace std;
int main()
{
    int l,m,c,d=0;
    cout<<"Enter the 2D Matrix dimensions"<<endl;
    cin>>l>>m;
    c=l*m;
    int arr[l][m];
    cout<<"Enter the values"<<endl;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<m;j++)
        {  
            cin>>arr[i][j];
        }
    }
    int rs=0,re=l-1,cs=0,ce=m-1,a=0,b=0,t=0;
    cout<<"Elements in Spiral Form"<<endl;
    while(d<c)
    {
        if(t==0)
        {
            cout<<arr[a][b]<<" ";
            if(b==ce)
            {
                t=1;
                rs++;
                a=rs;
            }
            else
            b++;
        }
        else if(t==1)
        {
            cout<<arr[a][b]<<" ";
            if(a==re)
            {
                t=2;
                ce--;
                b=ce;
            }
            else
            a++;
        }
        else if(t==2)
        {
            cout<<arr[a][b]<<" ";
            if(b==cs)
            {
                t=3;
                re--;
                a=re;
            }
            else
            b--;
        }
        else
        {
            cout<<arr[a][b]<<" ";
            if(a==rs)
            {
                t=0;
                cs++;
                b=cs;
            }
            else
            a--;
        }
        d++;
    }
    return 0;
}