#include<bits/stdc++.h>
using namespace std;
void show_list(list<int> l){
    list<int>::iterator ptr;
    for(ptr=l.begin();ptr!=l.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;
    int arr []={10,20,30,40,50};
    cout<<"before assign ...."<<endl;
    cout<<"size of the list 1 is"<<list1.size()<<endl;
    cout<<"element of list 1 is ";
    show_list(list1);
    list1.assign(arr+0,arr+5);
    cout<<"after assign ...."<<endl;
    cout<<"size of the list 1 is"<<list1.size()<<endl;
    cout<<"element of list 1 is ";
    show_list(list1);


return 0;
}
