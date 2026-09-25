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

    void display(const Student* s){
    cout<<"Roll Number : "<<s->rollNumebr<<endl; 
    cout<<"Name : "<<s->name<<endl;
    cout<<"Marks: "<<s->marks<<endl;
    }

    void displayIfExist(const Student* s){
        if(s != nullptr){
            display(s);
        }
        else{
            cout<<"No record Available."<<endl;
        }
    }

int main(){

    Student* s = nullptr;

    cout<<"Before Allocation : "<<endl;
    displayIfExist(s);

    s = new Student{};
    s->rollNumebr = 543021;
    s->name = "Muhammad Rayan Zulfiqar";
    s->marks = 100.0;
    cout<<"After Allocation and Entring Record : "<<endl;
    displayIfExist(s);

    delete s ;
    s = nullptr;
    cout<<"Deleting the record nulling the pointer : "<<endl;
    displayIfExist(s);



    




    return 0;
}