#include<iostream>
#include<math.h>
using namespace std;
class numbers {
private:
    int x,y,z;
public:
    void set_data(int x,int y ,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void show_data(){
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
    void operator -(){
        x=-x;
        y=-y;
        z=-z;

   }
};
int main(){
    numbers n1,n2;
    n1.set_data(3,4,5);
    n2.set_data(6,7,8);
    -n1;
    n1.show_data();
return 0;
}
