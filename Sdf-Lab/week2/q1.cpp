#include <iostream>
using namespace std;
int main()
{
    int *a= new int(8);
    float *b= new float(2.3);
    cout<<*a<<endl;
    cout<<*b;
    delete a;
    delete b;
    return 0;
}
