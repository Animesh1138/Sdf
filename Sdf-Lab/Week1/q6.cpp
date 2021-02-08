#include <iostream>
using namespace std;
int main()
    {
    int i,j;
    cout<<"Enter the dimensions"<<endl;
    cin>>i>>j;
    int a[i][j];
    int b[i][j]={0};
    cout<<"Enter the values"<<endl;
    for(int l=0;l<i;l++)
    {
        for(int m=0;m<j;m++)
        {
            cin>>a[l][m];
            if(a[l][m]==1)
                b[l][m]=1;
        }
    }
    for(int l=0;l<i;l++)
    {
        for(int m=0;m<j;m++)
        {
            if(b[l][m]==1)
            {
                for(int k=0;k<j;k++)
                {
                    a[l][k]=1;
                }
                for(int k=0;k<i;k++)
                {
                    a[k][m]=1;
                }
            }
        }
    }
    cout<<"The Output Array is"<<endl;
    for(int l=0;l<i;l++)
    {
        for(int m=0;m<j;m++)
        {
            cout<<a[l][m]<<" ";
        }
        cout<<endl;
    }
    return 0;
}