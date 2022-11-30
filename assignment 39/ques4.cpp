#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>flist={20,30,40,50};
    forward_list<int>::iterator ptr;
   flist.push_front(10);
   flist.reverse();
   for(ptr=flist.begin();ptr!=flist.end();ptr++){
     cout<<*ptr<<" ";
   }

return 0;
}
