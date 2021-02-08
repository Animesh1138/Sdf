#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"write constants a b c in equation a(x^2)+b(x)+c : ";
    cin>>a>>b>>c;
    cout<<endl;
    float D=sqrt((b*b)-4*a*c);
    float x1 =(-b+D)/(2*a);
    float x2 = (-b-D)/(2*a);
    cout<<"Given quardetric equation is :\n";
    printf("%d*(x^2) + %d*x + c \n",a,b,c);
    cout<<"roots are :"<<x1<<"\t"<<x2;
    return 0;
}