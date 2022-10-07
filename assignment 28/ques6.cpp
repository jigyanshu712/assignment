#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class complex{
private:
    int a,b;
public:

    void set_data(int a,int b){
    this->a=a;
    this->b=b;
    }
    void show_data(){
    cout<<"real = "<<a<<" imaginary = "<<b;
    }
    complex(){
    }
    complex(int a,int b){
       this->a=a;
       this->b=b;
    }
   complex& operator=(complex &c){
        this->a=c.a;
        this->b=c.b;
        return *this;
    }
};
int main(){
    complex c1(2,3),c2,c3;
    c2.set_data(4,5);
    c3=c1=c2;
    c1.show_data();
    c3.show_data();
return 0;
}
