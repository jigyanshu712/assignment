#include<iostream>
#include<forward_list>
using namespace std;
int main(){
    forward_list <int>first={1,2,3,4,5};
    for(int &a:first)
        cout<<a<<" ";
    cout<<endl;
return 0;
}
