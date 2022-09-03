#include<iostream>
using namespace std;
 class Greatest
 { public:
     void findl(int a,int b,int c){
         int x;
         x=a>b?((a>c)?a:c):((b>c)?b:c);
        cout<<"the greatest number is "<<x;
     }


 };
int main(){
    int a,b,c;
    Greatest l;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    cout<<"enter the third number : ";
    cin>>c;
    l.findl(a,b,c);



return 0;
}


