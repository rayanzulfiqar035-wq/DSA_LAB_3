// Name : Muhammad Rayan Zulfiqar
// CMS : 543021

#include<iostream>
#include<string>
#include<cctype>
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
    void updateMarks(Student* s){
        float newMarks;
        cout<<"Enter Updated Marks : ";
        cin>>newMarks;
        s->marks = newMarks;

    }

int main(){

    char choice;  // for validating i have choosen char
    Student* s = nullptr;

    while(true){
        cout<<"a. Create\nb. Display\nc. Update\nd. Delete\ne. Exit "<<endl;
        cout<<"Enter (a-e) from the options above : ";

        // I have used charactor instead of int for choice because they are
        // easier to validate while if a user write some char in int type choice
        // variable the system would break .

        cin>>choice;
        if(choice >= 'a'  && choice <= 'e'){
            bool exit = false;
            switch(choice){
            case 'a' :
                if(s != nullptr){
                    cout<<"A record exist already.\nif you wish to create again than delete."<<endl;
                    break;
                }
                s = new Student{};
                cout<<"Enter Roll Number : ";
                cin>>s->rollNumebr;
                cout<<"Enter Name : ";
                cin.ignore();
                getline(cin,s->name) ;
                cout<<"Enter Marks : ";
                cin>>s->marks; 
                cout<<"Record has been created."<<endl;
                break;
            case 'b' : 
                if(s == nullptr){
                    cout<<"There is no record yet."<<endl;
                    break;
                }
                display(s);
                break;
            case 'c' :
                if(s == nullptr){
                    cout<<"There is no record yet."<<endl;
                    break;
                }
                updateMarks(s);
                cout<<"Marks are Updated."<<endl;
                break;
            case 'd' : 
                if(s == nullptr){
                    cout<<"There is no record yet."<<endl;
                    break;
                }
                delete s;
                s = nullptr;
                cout<<"Record is deleted"<<endl;
                break;
            case 'e' :
                exit = true;
                cout<<"You have exited the system."<<endl;
                break;
            }
            if(exit) break;
        }
        else{
            cout<<"Invalid Input "<<endl;
        }

        cout<<"  ------------------ "<<endl;

    }


    return 0;
}

