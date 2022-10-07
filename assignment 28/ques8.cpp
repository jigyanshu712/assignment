#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class coords3d{
private:
    double x,y,z;
public:
    void set_data(double x,double y,double z){
        this->x=x;
        this->y=y;
        this->z=z;

    }
    void show_data(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    coords3d(){
        x=y=z=0;
    }
    coords3d(int x,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    coords3d operator,(coords3d obj){
        coords3d temp;
        temp.x=obj.x;
        temp.y=obj.y;
        temp.z=obj.z;
        return temp;
    }



};
int main(){
    coords3d c1(1,3,5);
    coords3d c2(2,4,6);
    coords3d c3;
    c3=(c1,c2);
    c3.show_data();
return 0;
}
