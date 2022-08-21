#include<iostream>
int main(){
    using namespace std;
   float a,b,c;
   cout<<" enter the two numbers  ";
   cin>>a>>b;
   cout<<"before swapping"<<endl;
   cout<<"a = "<<a<<" b = "<<b<<endl;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<"after swapping"<<endl;
   cout<<"a = "<<a<<" b = "<<b<<endl;



return 0;
}


