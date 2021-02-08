/*#include <iostream>
using namespace std;

int main()
{
	int *p; //pointer declaration
	int i=0;

	//allocating space for 5 integers
	p = new int[5];

	cout<<"Enter elements :\n";
	for(i=0;i<5;i++)
		cin>>p[i];

	cout<<"Input elements are :\n";
	for(i=0;i<5;i++)
		cout<<p[i]<<endl;
	
	delete p;
	return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int len, sum = 0;
    cout << "Enter the of the class : ";
    cin >> len;
    int *marks = new int[len];
    cout << "Enter the marks of each student" << endl;
    for( int i = 0; i < len; i++ ){
        cout<<"student "<<i+1<<" : ";
        cin >> marks[i];
    }
    for( int i = 0; i < len; i++ ){
        sum += marks[i];
    }
    cout << "sum is " << sum << endl;
    delete[] marks;
    return 0;
}
