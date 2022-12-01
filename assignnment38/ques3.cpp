#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1;
    list1.assign({1,2,3,4,5});
    list<int>::iterator ptr;
    for(ptr=list1.begin();ptr!=list1.end();ptr++){
        cout<<*ptr<<" ";
    }
return 0;
}
