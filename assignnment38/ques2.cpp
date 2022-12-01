#include<bits/stdc++.h>
using namespace std;
void show_list(list<int>g){
    list<int>::iterator  ptr;
    for(ptr=g.begin();ptr!=g.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1,list2;
    list1.assign(5,10);
    show_list(list1);
    cout<<"copying all the element of list 1 in list 2 : "<<endl;
    list2.assign(list1.begin(),list1.end());
    show_list(list2);

return 0;
}
