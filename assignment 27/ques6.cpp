#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class cstring{
private:
    char str[20];
public:
    void get_string(){
        cout<<"\n enter string : ";
        cin>>str;
    }
    void display(){
        cout<<str<<endl;
    }
    cstring operator +(cstring x){
        cstring s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return s;

    }

    bool operator ==(cstring &t){
        for(int i=0;str[i]!='\0';i++){
            for(int j=0;t.str[j]!='/0';j++){
                if(str[i]==t.str[j]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
        }
    }
};
int main(){
    cstring str1,str2,str3;
    int result;
    str1.get_string();
    str2.get_string();
    str3=str1+str2;
    str3.display();
    result=(str1==str2);
    if(result==0){
        cout<<"\n both string are equal";
    }
    else{
        cout<<" \nboth string are different";
    }

    return 0;
}
