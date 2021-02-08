# include<string.h>
#include<iostream>
using namespace std;
 class first
 {
     char studentname[20];

 public:
    void printname()
    {
        cout<<studentname;
    }
    first()
    {
        strcpy(studentname,"Animesh Yadav");
        printname();
    }

 };

 int main()
 {
    first s;
 }