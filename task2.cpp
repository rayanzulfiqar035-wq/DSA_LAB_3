// Name : Muhammad Rayan Zulfiqar
// CMS : 543021

#include<iostream>
#include<string>
using namespace std ;
    struct Student
    {
        int rollNumebr;
        string name ;
        float marks;
    };


    
int main(){

    Student s1;
    Student* p = &s1;

    s1.rollNumebr = 000000 ;
    s1.name = "Unknown";
    s1.marks = 0.0;

    // (*p).name == p->name 
    cout<<"Roll Number : "<<p->rollNumebr<<endl; 
    cout<<"Name : "<<p->name<<endl;
    cout<<"Marks: "<<p->marks<<endl;

    cout<<"\nEnter Roll Number : ";
    cin>>p->rollNumebr;
    cout<<"Enter Name : ";
    cin.ignore();
    getline(cin,p->name);  // use it for getting full name because cout take only one word as input
    cout<<"Enter Marks : ";
    cin>>p->marks;
    cout<<endl;

    // updated record
    cout<<"Roll Number : "<<p->rollNumebr<<endl; 
    cout<<"Name : "<<p->name<<endl;
    cout<<"Marks: "<<p->marks<<endl;

    
    return 0;
}