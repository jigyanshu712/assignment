#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number\n";
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(n==i)
       cout<<"it is a prime number";
    else
       cout<<"it is not a prime number";
return 0;
}
