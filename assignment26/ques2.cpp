#include<iostream>
#include<stdlib.h>
using namespace std;
class time{
private :
    int H,M,S;
public :
    void set_time(int ,int ,int);
    void show_time();
    void normalize();
    time add(time);

};
void time::set_time(int h,int m,int s){
H=h;
M=m;
S=s;
}
void time::show_time(){
cout<<H<<" : "<<M<<" : "<<S;
}

time  time::add(time t){
time T;
T.H=H+t.H;
T.M=M+t.M;
T.S=S+t.S;
return T;
}

void time::normalize(){
    M=M+(S/60);
    S=S%60;
    H=H+(M/60);
    M=M%60;
}



int main(){
    time t1,t2,t3;
    t1.set_time(5,125,125);
    t2.set_time(5,125,125);
    t1.normalize();
    t2.normalize();
    t3=t1.add(t2);
    t3.show_time();


return 0;
}
