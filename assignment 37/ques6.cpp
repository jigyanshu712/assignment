#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>::iterator ptr;
   reverse(v.begin(),v.end());
    cout<<"after reversing all the elements "<<endl;
    for(ptr=v.begin();ptr!=v.end();ptr++){
        cout<<*ptr<<" ";
    }

return 0;
}
