#include <iostream>
using namespace std;
int main()
{
    int r,c,p,i,j,k;
    cout << "Enter Layers\n";
    cin>>r>>c>>p;
    int a[r][c][p];
    cout<<"Enter Elements\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=0;k<p;k++)
                cin>>a[i][j][k];
        }
    }
    cout<<"Display 3D Array \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        for(k=0;k<p;k++)
        cout<<a[i][j][k]<<" ";
        cout<<endl;
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        for(k=0;k<p;k++)
        cout<<"Address of Value "<<a[i][j][k]<<" is "<<&a[i][j][k]<<endl;
    }
    return(0);
}