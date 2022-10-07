#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class marks {
private:
    int mark;
public:
    marks(int m){
        mark=m;
    }
    void display(){
    cout<<mark<<endl;
    }
    marks* operator->(){
        return this;
    }
};
int main(){
    marks m(50);
    m.display();
    m->display();
return 0;
}
