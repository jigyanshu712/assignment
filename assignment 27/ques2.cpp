#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class complex
{
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
    void operator ++(int useless){
        complex c;
        c.a=a++;
        c.b=b++;
        }
   void operator ++(){
       complex c;
       c.a=++a;
       c.b=++b;
   }
   complex(){
   }
   complex(int a,int b){
   this->a=a;
   this->b=b;
   }
};
int main(){
    complex c1,c2;
    c1.set_data(2,3);
    c2.set_data(2,3);
    c1++;
    ++c2;
    c1.show_data();
    c2.show_data();


return 0;
}

