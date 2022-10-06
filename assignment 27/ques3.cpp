#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class complex{
private :
    int a,b;
public:
    void set_data(int a,int b){
        this->a=a;
        this->b=b;
    }
    void  show_data(){
        cout<<a<<" + "<<b<<" i "<<endl;
    }
    complex(){
    }
    complex(int a,int b){
         this->a=a;
         this->b=b;
    }
    friend  complex operator +(complex ,complex);

};
complex operator +(complex c1,complex c2){
    complex t;
    t.a=c1.a+c2.a;
    t.b=c1.b+c2.b;
    return(t);
}
int main(){
    complex c1(2,3),c2={2,3},c3;
    c3=c1+c2;
    c3.show_data();

return 0;
}
