#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Library
{
    int BookNo;
    char BName[25];
    char Author[25];
    char Publisher[25];
    float Price;
    int No_of_Copies;
    int No_of_Copies_Issued;
    public:
    void initial()
    {
        cout<<endl<<"Enter book number : ";
        cin>>BookNo;
        cout<<endl<<"Enter book name : ";
        cin>>BName;
        cout<<endl<<"Enter Author name : ";
        cin>>Author;
        cout<<endl<<"Enter publisher name : ";
        cin>>Publisher;
        cout<<endl<<"Enter  price : ";
        cin>>Price;
        cout<<endl<<"Enter Number of copies: ";
        cin>>No_of_Copies;
    }
    void issue_book ()
    {
        cout<<"Enter book details......."<<endl;
        initial();
        if(No_of_Copies>0)
        {
            cout<<"enter How many book you want to issue:";
            cin>>No_of_Copies_Issued;
            if(No_of_Copies>=No_of_Copies_Issued)
            {
                No_of_Copies=No_of_Copies-No_of_Copies_Issued;
                cout<<endl<<" "<<No_of_Copies_Issued<<" book is issued..";
                display();
            }
            else
            {
                cout<<No_of_Copies_Issued<<" books is not available in stock..";
            }
        }
        else
        {
            cout<<"Book is not available";
        }
    }
    void return_book()
    {
        cout<<"enter book detail you want to return...";
        cout<<endl<<"Enter Book Number: ";
        cin>>BookNo;
        cout<<endl<<"Enter Book Name: ";
        cin>>BName;
        No_of_Copies=No_of_Copies+No_of_Copies_Issued;
        cout<<endl<<BookNo<<":"<<BName<<"Book is returned......";
    }
    void display()
    {
        cout<<"Book Number: "<<BookNo<<endl;
        cout<<"Book Name: "<<BName<<endl;
        cout<<"Author Name: "<<Author<<endl;
        cout<<"publisher Name: "<<Publisher<<endl;
        cout<<"Price: "<<Price<<endl;
    }
};
int main ()
{
   // system("cls");
    Library l1;
    int ch;
    cout<<"1->Issue book...."<<endl;
    cout<<"2->Return Book....."<<endl;
    cout<<"Enter your choice .. "<<endl;
    cin>>ch;
    switch(ch){
        case 1:
        l1.issue_book();
        break;
        case 2:
        l1.return_book();
        break;
    }
    return 0;
}
