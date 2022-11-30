#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> flist1={10,20,30,40};
    forward_list<int> flist2;
    forward_list<int>::iterator ptr;
    flist2.assign(flist1.begin(),flist1.end());
    for(ptr=flist2.begin();ptr!=flist2.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
return 0;
}
