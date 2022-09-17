#include<iostream>
#include<stdlib.h>
using namespace std;
class Box{
private:
    int length,breadth,height,v;
public:
    Box(){
    cout<<"enter length,breadth and height ";
    cin>>length>>breadth>>height;
    }
    void calculate_vol(){
    v=length*breadth*height;
    }
    void show(){
    cout<<"volume of the box is : "<<v;}

};
int main(){
    Box b1;
    b1.calculate_vol();
    b1.show();

return 0;
}
