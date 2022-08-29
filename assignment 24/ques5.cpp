#include<iostream>
#include<math.h>
using namespace std;
 bool isperfectsquare(int);
 bool isfibb(int);


 bool isperfectsquare(int n){
     int s;
     s=sqrt(n);
     return(s*s==n);
 }
 bool isfibb( int n){
     return(isperfectsquare(5*n*n+4) || isperfectsquare(5*n*n-4));
 }



int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    if(isfibb(n))
    cout<< n << " is a fibonacci number\n ";
    else
     cout<< n << " is  not a fibonacci number\n ";




return 0;
}
