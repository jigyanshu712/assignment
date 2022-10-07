#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class array{
private :
    int a[100];
    const int size=100;
public:
    array(){
    }
    void set_array(int n,int index){
        if(index>=size){
            cout<<"array index out of bound exception"<<endl;
            exit(0);

        }
        a[index]=n;
    }
    void display(int index){
        cout<<a[index]<<endl;
    }
    int operator[](int index){
        if(index>=size){
            cout<<"array out of bound exception"<<endl;
            exit(0);
        }
        return a[index];
    }
};
int main(){
    array b;
    b.set_array(5,90);
    b.display(90);
    cout<<b[90];
return 0;
}
