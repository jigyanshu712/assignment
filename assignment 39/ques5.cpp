#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>flist={1,1,1,2,2,2,3,3,3,3,4,4,5,5};
    forward_list<int>::iterator ptr;
    cout<<" list of elements before perform remove operation "<<endl;
    for(ptr=flist.begin();ptr!=flist.end();ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
    flist.unique();
    cout<<"after removing the duplicate elements the list are : "<<endl;
    for(ptr=flist.begin();ptr!=flist.end();ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

return 0;
}
