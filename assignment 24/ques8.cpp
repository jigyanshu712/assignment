#include<iostream>
using namespace std;
void area(int ,int);
void area(float);
void  area(float,float);
int main(){
    int a,b;
    float r,ba,h;
    cout<<"enter the length and breadth of the rectangle\n";
    cin>>a>>b;
    cout<<"enter the radius of the circle\n";
    cin>>r;
    cout<<"enter the base and height of the traingle\n";
    cin>>ba>>h;
    area(a,b);
    area(r);
    area(h,ba);
return 0;
}

void area(int a,int b){
    cout<<"area of rectangle is "<<a*b<<endl;
}
 void area(float r){
     cout<<"area of circle is "<<3.14*r*r<<endl;
 }
 void area(float b,float h){
     float a=0.5*b*h;
     cout<<"area of traingle is "<<a<<endl;
 }
