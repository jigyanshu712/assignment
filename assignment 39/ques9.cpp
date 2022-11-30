#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> flist1={10,20,30};
    forward_list<int> flist2={40,50,60};
    forward_list<int> :: iterator ptr;
    // Shifting elements from first to second
    // forward list after 1st position
    flist2.splice_after(flist2.begin(),flist1);
    for(ptr=flist2.begin();ptr!=flist2.end();ptr++){
        cout<<*ptr<<" ";
    }

return 0;
}
