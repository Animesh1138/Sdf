#include<iostream>
#include<math.h>

using namespace std;

class Triangle
{
 public:
 void area(int a,int b,int c);
 void perimeter(int a,int b,int c);
};

void Triangle::area(int a,int b,int c)
{
 float s=((a+b+c)/2.0),A=sqrt(s*(s-a)*(s-b)*(s-c));
 cout<<"Area of a triangle is: "<<A<<" sq. units\n";
}

void Triangle::perimeter(int a,int b,int c)
{
 cout<<"Perimeter of a triangle is: "<<a+b+c<<" units\n";
}

int main()
{
 Triangle tr1;
 int side1=3,side2=4,side3=5;
 tr1.area(side1,side2,side3);
 tr1.perimeter(side1,side2,side3);
 return 0;
}
/*
# include<iostream>
# include<math.h>
using namespace std;

class triangle
{
    float a,b,c;

public:

    void get()
    {
        cout<<"Enter the dimensions of the triangle :";
        cout<<endl<<"a : ";
        cin>>a;
        cout<<endl<<"b : ";
        cin>>b;
        cout<<endl<<"c : ";
        cin>>c;
    }
    void display(float x)
    {
        cout<<x<<endl<<endl;
    }

    void perimeter()
    {
        float perimeter=a+b+c;
        cout<<"The perimeter is :";
        display(perimeter);
    }

    void area()
    {
        float s;
        s=(a+b+c);
        s=s/2;
        float ar;
        ar=(s*(s-a)*(s-b)*(s-c));
        cout<<"The area is :";
        cout<<ar<<endl;
        display(ar);
    }
};
// end of class

int main()
{
    triangle t1;
    t1.get();
    t1.area();
    t1.perimeter();

}
*/
 
 //my updates
 /*
 #include<iostream>
#include<math.h>

using namespace std;

class Triangle
{
 public:
    void area(int a,int b,int c)
    {
    float s=((a+b+c)/2.0),A=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of a triangle is: "<<A<<" sq. units\n";
    }

    void perimeter(int a,int b,int c)
    {
    cout<<"Perimeter of a triangle is: "<<a+b+c<<" units\n";
    }
};
int main()
{
 Triangle tr1;
 int side1=3,side2=4,side3=5;
 tr1.area(side1,side2,side3);
 tr1.perimeter(side1,side2,side3);
 return 0;
}
 */