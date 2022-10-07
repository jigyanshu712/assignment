#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class integer{
private:
    int x;
public:
    operator int(){
        return x;
    }
    void set_data(int x){
    this->x=x;
    }
    void show_data(){
    cout<<"x ="<<x;
    }
};
int main(){
integer y;
int z;
y.set_data(10);
z=(int)y;
cout<<z<<endl;
return 0;


}
