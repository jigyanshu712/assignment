#include<iostream>
using namespace std;
class complex{
private:
    int re;
    int im;
public:
    void set_values(int a,int b){
        re=a;
        im=b;
    }
    void print(){
        cout<<"complex number is : ";
        cout<<re<<"+"<<im<<"i";
    }
};



int main(){
    int a,b;
    complex c1;
    cout<<"enter the real part of a number : ";
    cin>>a;
    cout<<"enter the imaginary part of  a number : ";
    cin>>b;
    c1.set_values(a,b);
    c1.print();
return 0;
}
