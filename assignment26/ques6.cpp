#include<iostream>
#include<stdlib.h>
using namespace std;
class Student{
private :
char name[30];
int rollno;
int total;
float perc;
public:
    Student(){
        cout<<"enter your name : ";
        cin>>name;
        cout<<"enter roll no.";
        cin>>rollno;
        cout<<"enter total marks out of 500 : ";
        cin>>total;
        perc=(float)total/500*100;

    }
    void show_details(){
    cout<<"name = "<<name<<endl;
    cout<<"roll no = "<<rollno<<endl;
    cout<<"total percentage : "<<perc<< "%";
    }

};
int main(){
    Student s1;
    s1.show_details();

return 0;
}

