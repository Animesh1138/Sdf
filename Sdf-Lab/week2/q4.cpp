#include <iostream>
using namespace std;

int main()
//a
/*{
    char lfc[20];
int i;
    for(i=0;i<10;i++)
        *(lfc+1)=65+i;
    *(lfc+i)=' ';
cout<<lfc;
    return (0);
}*/
//i) ABCDEFGHIJ*/
//b

{
    char *ptr;
    char Str[] = "abcdefg";
ptr =Str;
ptr+=5;
cout<<ptr;
    return 0;
}
//ii) fg
