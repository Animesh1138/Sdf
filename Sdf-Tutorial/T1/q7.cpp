#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a sentence :  ";
    getline(cin,str);
    cout<<endl;
    cout<<"Vowels = a,e,i,o,u\n";
    int count=0;
    for(int i=0;i<=str.length();i++)
    {
        if (str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        count+=1;   
    }
    cout<<"Number of Vowels = "<<count<<endl;
    return 0;
}