//array...smallest positive number missing
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    //Array size
    int n;
    cout<<"Enter size of array : ";
    cin>>n;        
    //Array
    int a[n];
    cout<<"Enter elements : "<<endl;         
    for(int i=0;i<n;i++)
    {
       cout<<"Enter element no."<<i+1<<": ";
       cin>>a[i];
    }
    //printing orignal array

    cout<<"Orignal array is : { ";         
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<", " ;
    }
    cout<<"}"<<endl;  
    //sorting
    for(int i=0;i<n;i++)
    {                 
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]<a[i])
                {
                    swap(a[j],a[i]);
                }
        }
    }
    //printing sorted array
    cout<<"Sorted array is : { ";      
    for(int i=0;i<n;i++)
    {
       cout<<a[i]<<", " ;
    }
    cout<<"}"<<endl;
    //size of new array
    int count=0 ;
    for(int i=0;i<n;i++)                
    {
        if(a[i]>0)
            count++;
    }   
    //appending to new array
    int new_ary[count];
    for(int i=0, j=0 ; i<n, j<count ; i++, j++)
    {
       if(a[i]>0)
        {
           new_ary[j]=a[i];
        }
    }  
    //printing new array
    cout<<"New array is : { ";      
    for(int i=0;i<count;i++)
    {
        cout<<new_ary[i]<<", " ;
    }
    cout<<"}"<<endl;
    //max and min for condition
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<count;i++)
    {   
        maxno= max(maxno,new_ary[i]);
        minno=min(minno,new_ary[i]);
            if(i==count-1){
                cout<<"maxno.= "<<maxno<<endl<<"minno.= "<<minno<<endl;
            }
    }

    
   //final condition
        
    if(minno==1)
    {
        for(int i=0;i<=maxno;i)
        {
            if(new_ary[i]!=i+1);
            cout<<"Found! "<<i+1<<"...is missing."<<endl ;
                i++;
                break;
        }      
    }

    else if(minno!=1)
    {
        cout<<"Found! 1 is missing."<<endl ;
    }

    return 0;
}