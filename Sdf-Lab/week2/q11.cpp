#include <iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    int *p=new int[r*c];
    cout << "No. of Rows & Columns\n";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter Elements\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        cin>>*(p+i*c+j); 
        }
    }
    cout<<"Display 2D Array \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            cout<<(p+i*c)[j]<<" "; 
        }
        cout<<endl;
    }
    delete[] p;
    return(0);
}