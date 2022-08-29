#include<iostream>
using namespace std;
int main(){
    int x,y,i,p=1;
    cout<<"enter the value of x and y\n";
    cin>>x>>y;
    for(i=1;i<=y;i++){
        p=p*x;
    }
    cout<<x<<" raised to the power "<< y <<"is "<<p;

return 0;
}
