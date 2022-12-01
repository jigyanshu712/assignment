#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<float>v;
    vector<float>:: iterator ptr;
    v.push_back(1.1);
    v.push_back(2.2);
    v.push_back(3.2);
    for(ptr=v.begin();ptr!=v.end();ptr++){
        cout<<*ptr<<" ";
    }

return 0;
}
