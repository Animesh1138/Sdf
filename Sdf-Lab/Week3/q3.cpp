#include<iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
     /* Function to set the values of
        real and imaginary part of each complex number */
     void setvalue()
    {
        cin>>real;
        cin>>imag;
    }
 // Function to display the sum of two complex numbers 
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
 // Function to add two complex numbers

    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void diff(Complex c1, Complex c2)
    {
        real=c1.real-c2.real;
        imag=c1.imag-c2.imag;
    }
    void product(Complex c1, Complex c2)
    {
        real=c1.real*c2.real;
        imag=c1.imag*c2.imag;
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5;
    cout<<"Enter real and imaginary part of first complex number"<<endl;
    c1.setvalue();
    cout<<"Enter real and imaginary part of second complex number"<<endl;
    c2.setvalue();
    cout<<"Sum of two complex numbers is"<<endl;
    c3.sum(c1,c2);
    c3.display();
    cout<<"Difference of two complex numbers is"<<endl;
    c4.diff(c1,c2);
    c4.display();
    cout<<"Product of two complex numbers is"<<endl;
    c5.product(c1,c2);
    c5.display();
    return 0;
}

/*
# include<iostream>
using namespace std;

class complex
{
    int r1,r2,i1,i2;

public:

    void getr()
    {
        cout<<"Enter the real part of first real no :";
        cin>>r1;
        cout<<"Enter the real part of second real no :";
        cin>>r2;
    }

    void geti()
    {
        cout<<endl<<endl;
        cout<<"Enter the imaginary part of first real no :";
        cin>>i1;
        cout<<"Enter the imaginary part of second real no :";
        cin>>i2;
    }

    void sum()
    {
        int r_net=r1+r2;
        int i_net=i1+i2;
        
        cout<<endl<<"Sum : "<<endl<<r_net<<" + "<<i_net<<"j";
    }

    void difference()
    {
        int r_net=r1-r2;
        int i_net=i1-i2;
        
        cout<<endl<<"difference : "<<endl<<r_net<<" + "<<i_net<<"j";
    }

    void product()
    {
        /*a+ib
        c+id
        (ac - bd) + i (ad+bc) //.....

        int r_net=r1*r2 - i1*i2;
        int i_net=r1*i2 + r2*i1;
        
        cout<<endl<<"Product"<<endl<<r_net<<" + "<<i_net<<"j";
    }
};
// end of class

int main()
{
    complex c1;

    //function calling
    c1.getr();
    c1.geti();
    c1.sum();
    c1.difference();
    c1.product();

}

    */