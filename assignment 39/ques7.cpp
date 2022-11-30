#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> flist1={3,2,9};
    forward_list<int>flist2={8,1,2};
    forward_list<int>::iterator ptr;
    flist1.sort();
    flist2.sort();
    flist1.merge(flist2);
    for(ptr=flist1.begin();ptr!=flist1.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;

return 0;
}
