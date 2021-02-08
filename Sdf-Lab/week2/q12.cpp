 
#include <iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout << "No. of Rows & Columns\n";
    cin>>r>>c;
    int a[r][c];
    int (*p)[c];
    p=a;
    cout<<"Enter Elements\n";
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    cin>>*(*(p+i)+j);
    cout<<"Display 2D Array \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cout<<*(*(p+i)+j)<<" ";
        cout<<endl;
    }
    return(0);
}
 