#include<iostream>
using namespace std;
 class cube{
 private:
    int s;
    int v;
 public:
    cube(int a){
    s=a;}
    cube(){
    }

    void set_side( int a){
        s=a;
    }
void calculate_volume(){
   v=s*s*s;
}
void show_volume(){
    cout<<"volume of cube is : "<<v;
}
 };
int main(){
    cube c(3);
    c.calculate_volume();
    c.show_volume();
return 0;
}
