#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank{
    private :
        float p;
        float r;
        float t;
        float si;
        float amount;
   public:
       Bank(){
           p=0;
           r=0;
           t=0;
           si=0;
       }
    void read(){
        cout<<"enter the principle amount : ";
        cin>>p;
        cout<<"\n enter rate of interest : ";
        cin>>r;
        cout<<"enter the years : ";
        cin>>t;
        si=(p*r*t)/100;
        amount=si+p;
    }
    void show( )
         {
                cout<<"\n Entered Details are :: \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n\n Rate of Interest: "<<r;
                cout <<"\n\n Number of years: "<<t;
                cout <<"\n\n Interest : "<<si;
                cout <<"\n\n Total Amount : "<<amount<<"\n";

         }

};

int main(){
    Bank b ;

    b.read ( );
    b.show ( );
return 0;
}
