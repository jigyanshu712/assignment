#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Bill{
private :
    char name[30];
    char address[50];
    float unit;

public:
    void get(){
      cout<<"enter your name : ";
      gets(name);
      //fflush(std);
      cout<<"\n enter your address : ";
      gets(address);
      cout<<"enter the units : ";
      cin>>unit;

    }
    int calculateBill(){
        if(unit<=100)
            return (unit*(1.20));
        else if(unit<=200)
        return (100*1.20)+(unit-100)*2;
        else if (unit >200)
            return (100*1.20)+(100*2)+(unit-200)*3;

    }
};
int main(){
    Bill b1;
    b1.get();
    cout<<"the bill amount in Rs "<<b1.calculateBill();
return 0;
}
