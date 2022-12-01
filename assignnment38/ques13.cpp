#include<bits/stdc++.h>
using namespace std;
int main(){
    list<char> list1;
    for(char i='A';i<='Z';i++){
        list1.push_back(i);
    }
    for( char x:list1){
        cout<<x<<" ";
    }
return 0;
}
