#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>flist1={1,2,3,4,5};
    forward_list<int>flist2={6,7,8,9,10};
    flist1.merge(flist2);
    forward_list<int>::iterator ptr;
    cout<<"after  merging of two  list is : "<<endl;
    for(ptr=flist1.begin();ptr!=flist1.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
return 0;
}
