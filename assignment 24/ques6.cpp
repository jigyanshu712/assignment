#include<iostream>
using namespace std;
 void swap( int &,int &);
int main(){
    int a,b;
    cout<<"enter the number a and b\n";
    cin>>a>>b;
    cout<<"before swapping :\n";
    cout<<" a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"after swapping :\n";
    cout<<"a = "<<a<< " b = "<<b;
    return 0;
}


 void swap(int &a,int &b){
     int temp;
     temp=a;
     a=b;
     b=temp;
}

