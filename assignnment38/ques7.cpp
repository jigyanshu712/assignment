#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1={1,2,3,4,5};
    list1.push_front(0);
    list1.push_back(6);
    for(list<int>::iterator ptr=list1.begin();ptr!=list1.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;

return 0;
}
