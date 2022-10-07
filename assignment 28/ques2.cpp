#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class complex{
private:
    int a,b;
public:
     void show_data(){
         cout<<a<<" + "<<b<<" i "<<endl;
     }
     void set_data(int a ,int b){
         this->a=a;
         this->b=b;
     }
     complex(int a,int b){
        this->a=a;
        this->b=b;
     }
     complex(){
     }
    friend istream& operator>>(istream &in,complex &c){
         cout<<"enter a real part and imaginary part\n";
         in>>c.a>>c.b;
         return in;
     }

  friend ostream& operator<<(ostream &out,complex &c){
      out<<"real = "<<c.a<<" imaginary = "<<c.b<<endl;
      return out;

  }

};
int main(){
    complex c1,c2;
    c1.set_data(2,3);
    c1.show_data();
return 0;
}
