#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>list1={1,2,3,4,5};
    list<int>list2={6,7,8,9,10};
    list<int>::iterator ptr;
    list1.merge(list2);
    for(ptr=list1.begin();ptr!=list1.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
return 0;
}
