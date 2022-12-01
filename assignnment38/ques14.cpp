#include<bits/stdc++.h>
using namespace std;
int main(){
    list<char> list1;
    for(char i='A';i<='Z';i++){
        list1.push_back(i);
    }
    list<char>:: const_iterator it;
    for(it=list1.begin();it!=list1.end();it++){
        cout<<*it<<" ";
    }
return 0;
}
