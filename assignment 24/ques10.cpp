#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);

int add(int a,int b){
return(a+b);}

float add(float a, float b){
return(a+b);
}

int main(){
    int a,b;
    float c,d;
    cout<<"enter two integers numbers "<<endl;
    cin>>a>>b;
    cout<<"the sum of two integers numbers is "<<add(a,b)<<endl;
     cout<<"enter two float numbers "<<endl;
    cin>>c>>d;
    cout<<"the sum of two floats numbers is "<<add(c,d);
return 0;
}
