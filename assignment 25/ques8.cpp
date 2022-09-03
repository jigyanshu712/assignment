#include<iostream>
using namespace std;
class rectangle{
public:
    void area(float l,float b){
        cout<<"area of rectangle  is "<<l*b;
    }
};
int main(){
    float l,b;
    rectangle c;
    cout<<"enter the length and breadth of the rectangle : ";
    cin>>l>>b;
    c.area(l,b);
    return 0;
}

