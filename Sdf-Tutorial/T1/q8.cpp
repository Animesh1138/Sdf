#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a sentence :  ";
    getline(cin,str);
    //cin>>str;
    cout<<endl;
    cout<<"String before removing Vowel :  "<<str<<endl;
    for(int i=0;i<str.length();i++)
    {
        if (str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            str.erase(i,1);
    }
    cout<<"String after removing Vowel :  "<<str<<endl;
    return 0;
}