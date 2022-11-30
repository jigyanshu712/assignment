#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>flist1={1,2,3,4,5};
    forward_list<int>flist2={6,7,8,9,10};
    forward_list<int>::iterator ptr;
    flist1.swap(flist2);
    for(ptr=flist1.begin();ptr!=flist1.end();ptr++){
        cout<<*ptr<<" ";
    }


return 0;
}
