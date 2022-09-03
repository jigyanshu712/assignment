#include<iostream>
using namespace std;
class Circle{
public:
    void area(float r){
        cout<<"area of circle is "<<3.14*r*r;
    }
};
int main(){
    float r;
    Circle c;
    cout<<"enter the radius of the circle : ";
    cin>>r;
    c.area(r);
    return 0;
}
