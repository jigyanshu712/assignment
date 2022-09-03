#include<iostream>
using namespace std;
 class time{
 private:
    int h,m,s;
 public:
    void set_dimension(int H,int M,int S){
        h=H;
        m=M;
        s=S;
    }
    void display(){
        cout<<"time is : ";
        cout<<h<<" hr "<<m<<" min "<<s<<" sec ";
    }
 };
int main(){
    int h,m,s;
    time t1;
    cout<<"enter the hour : ";
    cin>>h;
    cout<<"enter the min : ";
    cin>>m;
    cout<<"enter the sec : ";
    cin>>s;
    t1.set_dimension(h,m,s);
    t1.display();
return 0;
}
