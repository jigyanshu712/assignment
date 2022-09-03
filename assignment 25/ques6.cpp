#include<iostream>
using namespace std;
class square{
private:
    int s;



public:

    void set_dimension(int n){
        s=n;


    }
    void display(){
        cout<<"the square of s is " <<s*s;

    }

};
int main(){
    square s1;
    int n;
    cout<<" enter the number : ";
    cin>>n;
    s1.set_dimension(n);
    s1.display();

return 0;
}
