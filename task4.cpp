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

    void updateMarks(Student* s, float newMarks){

        s->marks = newMarks;

    }


    
int main(){

    Student* s1 = new Student{};
    float updatedMarks;
    s1->rollNumebr = 0;
    s1->name = "Muhammad Rayan Zulfiqar";
    s1->marks = 100.0;

    //before software(lines of code) update
    display(s1);

    cout<<endl;

    cout<<"Enter Updated Marks: ";
    cin>>updatedMarks;
    updateMarks(s1, updatedMarks);

    cout<<endl;

    //After Update

    display(s1);

    delete s1;
    s1 = nullptr;




    return 0;
}