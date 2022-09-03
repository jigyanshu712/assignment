#include<iostream>
using namespace std;
class ReverseNumber{
public:
    rev(int x){
        int r,s=0;
        while(x!=0){
            r=x%10;
            s=s*10+r;
            x=x/10;
        }
        cout<<"the reverse number is  "<<s;

    }

};

int main(){
    int n;
    ReverseNumber r1;
    cout<<"enter the number : ";
    cin>>n;
    r1.rev(n);

}
