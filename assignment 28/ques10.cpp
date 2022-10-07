#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class dis{
private:
    int feet,inches;
public:
    distance(){
        feet=0;
        inches=0;
    }
    distance(int feet,int inches){
        this->feet=feet;
        this->inches=inches;
    }

    void show_data(){
        cout<<" feet = "<<feet<<" inches = "<<inches<<endl;
    }
    void set_distance(int a,int b,int c){
        feet=a+c+5;
        inches=a+b+15;
    }

};



int main(){
    dis d1;
    d1.set_distance(3,4,5);
    d1.show_data();


return 0;
}
