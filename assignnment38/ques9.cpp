#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1={1,1,2,3,4,4,5};
    list<int>::iterator ptr;
    list1.unique();
    for(ptr=list1.begin();ptr!=list1.end();ptr++){
        cout<<*ptr<<" ";
    }
return 0;
}
