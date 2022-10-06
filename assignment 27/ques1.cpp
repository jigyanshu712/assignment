#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class complex{
private :
    int a,b;
public:
     void show_data(){
    cout<<a<<" + "<<b<<" i ";
    }
    void set_data(int a, int b){
        this->a=a;
        this->b=b;
    }
    complex(){
    }
    complex(int a ,int b){
        this->a=a;
        this->b=b;

    }
    complex operator +(complex c){
        complex t;
        t.a=a+c.a;
        t.b=b+c.b;
        return t;

        }
        complex operator *(complex c)
        {
            complex t;
            t.a=a*c.a;
            t.b=b*c.b;
            return t;
        }
         complex operator -(complex c)
        {
            complex t;
            t.a=a-c.a;
            t.b=b-c.b;
            return t;
        }
        bool operator ==(complex c){
            if(a==c.a && b==c.b)
                return true;
            return false;
        }

    };
int main(){
    complex c1,c2,c3;
    c1.set_data(2,3);
    c2.set_data(2,3);
    c3=c1-c2;
    c3.show_data();

return 0;
}
