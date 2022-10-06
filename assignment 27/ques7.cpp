#include<iostream>
#include<math.h>
using namespace std;
class fraction{
private :
    long num;
    long den;
public :
    fraction(long n=0,long d=0){
       num=n;
       den=d;
    }

    friend void operator>>(istream &in ,fraction &f){
        cout<<"\n numerator : ";
        in>>f.num;
        cout<<"\n denominator : ";
        in>>f.den;

    }
    friend void operator<<(ostream &out,fraction &f){
        out<<f.num<<" / "<<f.den<<endl;
    }
    fraction operator++(){
        ++num;
        ++den;
        return(*this);

    }
    fraction operator++(int s){
        fraction temp=*this;
        num++;
        den++;
        return temp;
    }
};
int main(){
    fraction f1,f2;
    cout<<" f1 : ";
    cout<<f1;
    cout<<" f2 : ";
    cout<<f2;
    cout<<"\n enter first fraction value "<<endl;
    cin>>f1;
    f1++;
    cout<<" f1++ : ";
    cout<<f1;
    f1++;
    cout<<" ++f1 : ";
    cout<<f1;
    cout<<"\n enter second fraction value "<<endl;
    cin>>f2;
    cout<<"f2 = ++ f1 "<<endl;
    f2=++f1;
    cout<<" f1  :  ";
    cout<<f1;
    cout<<"\n f2 : ";
    cout<<f2;
    cout<<"f2 =  f1++ "<<endl;
    f2=f1++;
    cout<<" f1  :  ";
    cout<<f1;
    cout<<"\n f2 : ";
    cout<<f2;







return 0;
}
