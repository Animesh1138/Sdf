#include <iostream>
using namespace std;

int main()
{
    cout<<"Truth table for AND , OR & NOT"<<endl;
    cout<<" ___________________________________________"<<endl;
    cout<<"|  N1 |  N2 |  And |  Or | Not N1 | Not N2 |"<<endl;
    cout<<" -------------------------------------------"<<endl;
    cout<<"|  1  |  1  |   1  |  1  |    0   |    0   |"<<endl;
    cout<<"|  1  |  0  |   1  |  1  |    0   |    1   |"<<endl;
    cout<<"|  0  |  1  |   1  |  1  |    1   |    0   |"<<endl;
    cout<<"|  0  |  0  |   0  |  0  |    1   |    1   |"<<endl;
    cout<<" -------------------------------------------"<<endl;    
    return 0;
}