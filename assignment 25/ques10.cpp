#include<iostream>
using  namespace std;
class Area{
    public :
    void circle(float r){
        cout<<"area of circle is "<<3.14*r*r<<endl;
    }
     void rectangle(float l,float b){
    cout<<" area of rectangle is "<<l*b<<endl;
    }
     void square(float s){
        cout<<"area of square is "<<s*s<<endl;
    }

};
int main(){
   float l,b,r,s;
   Area c;
   cout<<"enter the side of the square : ";
   cin>>s;
   cout<<"enter the length and breadth of rectangle :  ";
   cin>>l>>b;
   cout<<"enter the radius of the circle : ";
   cin>>r;
   c.square(s);
   c.rectangle(l,b);
   c.circle(r);
return 0;
}
