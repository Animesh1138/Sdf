#include <iostream>
using namespace std;

int main()
{
    float x,a,b,c,d;
    cout<<"Enter the value of a,b,c&d: ";
    cin>>a>>b>>c>>d;
    x=((a/(b-c)) +d);
    if ((b-c)==0){
        cout<<"Cannot divide by zero Error.Retry with different input";
    }
    cout<<"x=a/(b-c) +d = "<<x<<endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
float a,b,c,d,x;
cout<<"Enter four numbers"<<endl;
cin>>a>>b>>c>>d;
if((b-c)!=0)
{
x=a/(b-c)+d;
cout<<"x=a+(b-c)+d="<<x;
}
else
{
cout<<"Division by zero not possible. Retry with different input";
}
return 0;
}*/
