#include<iostream>
using namespace std;
int max(int ,int);
float max(float ,float);

int max(int a ,int b){
    if(a>b)
        return a;
    else
        return b;
}

float max(float a ,float b){
    if(a>b)
        return a;
    else
        return b;
}


int main(){


cout<<"the maximum no.is "<<max(2,10)<<endl;
cout<<"the maximum no.is "<<max(10.5,3.5);

return 0;
}


