#include<iostream>
#include<math.h>
using namespace std;
class time{
private :
    int hours,minutes,seconds;
public:
    time(){
        hours=minutes=seconds=0;
    }
    time(int hours,int minutes,int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }
    void show_time(){
    cout<<hours<< " : " << minutes<<" : "<<seconds<<endl;
    }
    void set_time(int hours,int minutes,int seconds){
        this->hours=hours;
        this->minutes=minutes;
        this->seconds=seconds;
    }

    friend operator >> (istream &input, time &t){
        cout<<"\n enter hours : ";
        input>>t.hours;
        cout<<" \n enter minutes : ";
        input>>t.minutes;
        cout<<"\n enter seconds : ";
        input>>t.seconds;
        t.minutes=t.minutes+(t.seconds/60);
        t.seconds=t.seconds%60;
        t.hours=t.hours +(t.minutes/60);
        t.minutes=t.minutes%60;
    if(t.hours>=25)
        return 1;
    else
        return 0;
    }
    friend operator <<(ostream &output,time &t)
    {

        cout<<"\n hours  : "<<t.hours ;
        cout<<"\n minutes : "<<t.minutes;
        cout<<"\n seconds : "<<t.seconds;
    }
     int operator == (time t1){
        int tot=hours*3600+minutes*60+seconds;
        int tot1=t1.hours*3600+t1.minutes*60+seconds;
        if(tot==tot1)
            return 1;
        else
            return 0;
    }
    ~time(){
    }

};
int main(){
    time t,t1;
    cout<<"enter first time\n";
    if(cin>>t){
        cout<<"/n invalid time";
        return 0;
    }
    cout<<"\n first time : ";
    cout<<t;
    cout<<"\n enter second time";
    if(cin>>t1){
        cout<<"\n invalid time";
        return 0;
    }
    cout<<"\n second time : ";
    cout<<t1;
    if(t==t1)
        cout<<"time are same\n";
    else
        cout<<"time are different\n";


return 0;
}









