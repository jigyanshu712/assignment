#include<iostream>
using namespace std;
int main(){
    int n,r,max=1;
    cout<<"enter the number\n";
    cin>>n;
    while(n!=0){
            r=n%10;
            if(max<r)
            max=r;
    n=n/10;

    }
    cout<<"the highest value digit in a given number"<<max;


return 0;
}
