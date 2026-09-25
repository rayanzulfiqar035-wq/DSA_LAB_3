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

    Student* s1 = new Student{};

    s1->rollNumebr = 543021;
    s1->name = "Muhammad Rayan Zulfiqar";
    s1->marks = 100.0;

    cout<<"Roll Number : "<<s1->rollNumebr<<endl; 
    cout<<"Name : "<<s1->name<<endl;
    cout<<"Marks: "<<s1->marks<<endl;

    delete s1;
    s1 = nullptr;


    return 0;
}