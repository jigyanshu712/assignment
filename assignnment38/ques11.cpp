#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1={50,120,20,30,50};
    list<int>list2;
    list<int>:: iterator it;
    list2.assign(list1.begin(),list1.end());
    for(it=list2.begin();it!=list2.end();it++){
        cout<<*it<<" ";

    }
    cout<<endl;
return 0;
}
