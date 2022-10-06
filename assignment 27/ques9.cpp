#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class mystring{
private:
    char str[100];
public :
    void input(){
       cout<<"enter the string : "<<endl;
       cin>>str;
    }
    void display(){
    cout<<"string is :";
    cout<<str<<endl;
    }
    void operator !(){
        for(int i=0;str[i]!='\0';i++){
            if(str[i]>=65 && str[i]<=90){
                str[i]=str[i]+32;
            }
            else if(str[i]>=97 && str[i]<=122){
                str[i]=str[i]-32;
            }
        }
        cout<<" \n\n reverse string is : "<<str;
    }
};
int main(){
    mystring s1;
    s1.input();
    s1.display();
    !s1;
return 0;
}
